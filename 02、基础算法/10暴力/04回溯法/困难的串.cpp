#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int n , l;
char s[100];
char a[100] , b[100];
int dfs(int cur){
	if(cur == n){
		cout << s << "\n";
		return 0;
	}
	else{
		for(int i = 0;i<l;i++){
			s[cur] = 'A'+i;
			cout << "test:" << s<< "\n";
			bool ok = true;
			for(int j = 1 ; j*2 <= cur+1; j++) {                  // 尝试长度为j*2的后缀
				bool is = true;
				for(int k  = 0;k<j;k++){
					if(s[cur-k] != s[cur-k-j]){is = false;break;}
				}
				if(is){ok = false;break;}
			}
			if(ok){
				cout << "use:" << s<< "\n\n";
				if(!dfs(cur+1))return 0;
			}
		}
	}
	return 1;
}
int main(){
	while(cin >> n >> l && n && l){
		memset(s,0,100);
		memset(a,0,100);
		memset(b,0,100);
		dfs(0);
	}
}
