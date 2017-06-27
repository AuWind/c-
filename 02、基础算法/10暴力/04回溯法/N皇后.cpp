#include<iostream>
using namespace std;
int n , a[100],ans;
void dfs(int cur){
	if(cur == n)ans++;
	else for(int i = 0;i<n;i++){
		bool ok = true;
		for(int j = 0;j<cur;j++)
			if( i == a[j] || cur+i == j+a[j] || cur-i == j - a[j]) ok = false;
		if(ok){
			a[cur] = i;
			dfs(cur+1);
		}
	}
}
int main(){
	cin >> n;
	dfs(0);
	cout << ans;
	return 0;
}
