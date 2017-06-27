#include<iostream>
#include<algorithm>
using namespace std;
int n, a[100];
int main(){
	cin >> n;
	for(int i = 0;i<n;i++)cin >> a[i];
	sort(a,a+n);
	do{
		for(int i = 0;i<n;i++)cout << a[i] << " ";
		cout << "\n";
	}while(next_permutation(a,a+n));
	return 0;
}
