#include<iostream>
#include<cstring>
using namespace std;
const int maxn = 510;
char a[maxn] , b[maxn] , c[maxn];
int a1[maxn] , b1[maxn] , c1[maxn];
int main(){
	cin >> a >> b;
	if(strlen(a) < strlen(b) || (strlen(a) == strlen(b) && strcmp(a,b) < 0)){//如果a的位数小于b的位数     和   a串小于b串   那么先输出负号   且交换a,b串
		cout << "-";
		strcpy(c,a);
		strcpy(a,b);
		strcpy(b,c);
	}
	
	//a>b
	int al = strlen(a) , bl = strlen(b);
	for(int i = 0;i<al;i++)a1[al - i] = a[i] - '0';//47   -> 074
	for(int i = 0;i<bl;i++)b1[bl - i] = b[i] - '0';//1      -> 01
		
	int i = 1;//这里很关键从1开始
	while( i <= al || i <= bl ){
		if(a1[i] < b1[i]){
			a1[i] += 10;
			a1[i+1]--;
		}
		c1[i] = a1[i] - b1[i];
		i++;
	}
	//从i开始找到不等于零的位置
	int cl = i;
	while(c1[cl] == 0 && cl > 1)cl--;
	//输出
	for(int i = cl;i>0;i--)cout << c1[i];
	cout << "\n";
	return 0;
}
