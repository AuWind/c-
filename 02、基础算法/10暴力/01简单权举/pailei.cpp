#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n , a[100];
int * p;
void dfs(int cur){
	if(cur >n){
		printf("%d" , a[1]);
		for(int i =  2;i<=n;i++)printf(" %d" , a[i]);
		printf("\n");
	}else for(int i = 1;i<=n;i++){
		p = find(a+1,a+1+cur , i);
		if(p == a+1+cur){
			a[cur] = i;
			dfs(cur+1);
		}
	}
}
int main(){
	while(scanf("%d" , &n) == 1 && n >0){
		dfs(1);
	}
	return 0;
}
