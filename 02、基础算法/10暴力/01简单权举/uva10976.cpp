#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n  , a[1000] , b[1000];
int main(){
	while(scanf("%d" , &n) == 1 && n){
		int k = 2 * n;
		int cnt = 0;
		for(int y = n+1;y<=k;y++){
			if((y*n) % (y-n) == 0){
				a[cnt] = (y*n)/(y-n);
				b[cnt++] = y;
			}
		}
		if(cnt){
			printf("%d\n" , cnt);
			for(int i = 0;i<cnt;i++)printf("1/%d = 1/%d + 1/%d\n" , n , a[i] , b[i]);
		}else{
			printf("no have\n");
		}
	}
	return 0;
}
