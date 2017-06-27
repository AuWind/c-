#include<iostream>
#include<cstdio>
using namespace std;
const int maxn = 110;
int n,a[maxn],sum,avg,step;
int main(){
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> a[i];
		sum += a[i];
	}
	avg = sum / n;
	for(int i = 0;i<n;i++){
		int t = a[i] - avg;
		if(t != 0){
			a[i] -= t;
			a[i+1] += t;
			step++;
		}
	}
	cout << step;
	return 0;
}
