#include<iostream>
using namespace std;
bool is_prime(int a){
	bool is = true;
	for(int i = 2;i*i <= a;i++)
		if(a % i == 0){is = false;break;}
	return is;
}
int n , s[100] , isp[100] , b[100];
bool isv[100];

void dfs(int cur){
	if(cur == n && isp[b[0] + b[cur -1]]){
		for(int i = 0;i<n;i++)printf("%d " , b[i]);
		printf("\n");
	}else for(int i = 2;i<=n;i++){
		if(!isv[i] && isp[i + b[cur-1]]){
			b[cur] = i;
			isv[i] = 1;
			dfs(cur+1);
			isv[i] = 0;
		}
	}
	
}

int main(){
	cin >> n;
	for(int i = 1;i<=n;i++)s[i-1] = i;
	for(int i = 2;i<=2*n;i++)isp[i] = is_prime(i);
	/*
	do{
		bool ok = true;
		for(int i = 0;i<n;i++)if(!isp[s[i]+s[(i+1)%n]]){ok = false;break;}
		if(ok){
			for(int i = 0;i<n;i++)printf("%d " , s[i]);
			printf("\n");
		}
	}while(next_permutation(s+1 , s+n));
	*/
	b[0] = 1;
	dfs(1);
	return 0;
}
