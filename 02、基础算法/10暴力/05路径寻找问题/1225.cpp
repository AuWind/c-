#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<set>
using namespace std;
int mb = 123804765;
typedef int State[9];
const int MAXN = 1000000;
State st[MAXN];//过程状态
State gad;//目标状态
int jl[MAXN];//过程步数
const int ydx[4] = {1,0,-1,0};
const int ydy[4] = {0,1,0,-1};
bool isok(State & a ,State & b){
	bool ok = true;
	for(int i = 0;i<9;i++)if(a[i] != b[i])ok = false;
	return ok;
}
//
set<int> s;
bool isre(State & n){
	int ii = 0;
	for(int i = 0;i<9;i++)ii = ii*10 + n[i];
	if(s.count(ii))return false;
	else s.insert(ii);
	return true;
}
int dfs(){
	int head = 1,end = 2;
	jl[head] = 0;
	while(head < end){
		//判断现在的状态是否已经达到
		if(isok(gad , st[head]))return head;
		//找到零的位置
		int z = 0;
		while(st[head][z] != 0)z++;
		int x , y;
		x = z / 3;
		y = z % 3;
		for(int i = 0;i<4;i++){
			int x1 = x+ydx[i];
			int y1 = y + ydy[i];
			if(x1 >=0 && x1 <= 2 && y1 >=0 && y1 <=2){
				int z1 = x1*3 + y1;
				State & st1 = st[end];
				for(int i = 0;i<9;i++)st1[i] = st[head][i];
				st1[z1] = st[head][z];//0
				st1[z] = st[head][z1];//
				
				jl[end] = jl[head]+1;
				if(isre(st1))end++;
				
			}
		}
		head++;
	}
	return 0;
}
int main(){
	
	//输入第一个状态
	for(int i = 0;i<9;i++)st[1][i] = getchar() - '0';
	//初始目标状态
	for(int i = 8;i>=0;i--){gad[i] = mb %10;mb /=10;}
	int ans = dfs();
	if(ans > 0)cout << jl[ans];
	else cout << -1;
}
