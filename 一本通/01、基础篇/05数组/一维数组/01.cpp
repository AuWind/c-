/*
1、与指定数字相同的数的个数【1.6编程基础之一维数组01】
    输出一个整数序列中与指定数字相同的数的个数。
输入:
    输入包含三行：
    第一行为N，表示整数序列的长度(N <= 100)；
    第二行为N个整数，整数之间以一个空格分开；
    第三行包含一个整数，为指定的数字m。
输出:
    输出为N个数中与m相同的数的个数。
样例输入:
    3
    2 3 2
    2
样例输出:
    2
*/
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int n,a[110],m,ans=0;
	cin >> n;
	for(int i = 0;i<n;i++)cin >> a[i];
	cin >> m;
	
	for(int i = 0;i<n;i++){
		if(a[i] == m)ans++;
	}
	
	cout << ans << "\n";
	return 0;
}
