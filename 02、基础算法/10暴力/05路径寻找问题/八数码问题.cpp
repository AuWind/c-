#include<iostream>
#include<cstring>
#include<cstdio>
#include<set>
using namespace std;
const int MAXN = 1000000;
typedef int State[9];
State md , st[MAXN];//目标 ， 过程状态，1为初始状态
int gc[MAXN];//记录步数
//
set<int>s;
bool isre(State & st1){
	int n = 0;
	for(int i = 8;i>=0;i--)n = n*10 + st1[i];
	if(s.count(n))return false;
	else s.insert(n);
	return true;
}
//
const int dx[4] = {0 , 1 , 0 , -1};
const int dy[4] = {1 , 0 , -1 , 0};
int bfs(){
	int head = 1, end = 2;
	while(head < end){
		State & thisst = st[head];//引用这次队列状态
		if(memcmp(md , thisst , sizeof(md)) == 0)return head;//如果达到目标状态就返回队列序号
		/*加入搜索start*/
		int z = 0;
		while(thisst[z] != 0)z++;
		int x = z / 3, y = z % 3;
		for(int i = 0;i<4;i++){
				int x1 =x + dx[i] , y1 = y + dy[i];
				if(!(x1 < 0 || x1 > 2 || y1 < 0 || y1 > 2)){
					int z1 = x1 * 3 + y1;
					State & endst = st[end];
					memcpy(endst , thisst , sizeof(thisst));
					endst[z] = thisst[z1];
					endst[z1] = thisst[z];
					if(isre(endst)){gc[end] = gc[head]+1;end++;}
				}
		}
		/*加入搜索end*/
		head++;//完成一次搜索后出队
	}
	return 0;
}
int main(){
	//输入初始状态
	for(int i = 0;i<9;i++)st[1][i] = getchar() - '0';
	int a = 123804765;
	for(int i = 8;i>=0;i--){md[i] = a%10;a /=10;}
	int ans = bfs();
	if(ans > 0)cout  << gc[ans];
	else cout << -1;
	return 0;
}
