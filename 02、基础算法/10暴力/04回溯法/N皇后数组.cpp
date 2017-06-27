#include<iostream>
using namespace std;
int n , a[3][100],ans;
void dfs(int cur){
	if(cur == n)ans++;
	else for(int i = 0;i<n;i++){
		if(!a[0][i] && !a[1][cur+i] &&  !a[2][cur-i+n]){
			a[0][i] = a[1][cur+i] =  a[2][cur-i+n] = 1;
			dfs(cur+1);
			a[0][i] = a[1][cur+i] =  a[2][cur-i+n] = 0;
		}
	}
}
int main(){
	cin >> n;
	dfs(0);
	cout << ans;
	return 0;
}
