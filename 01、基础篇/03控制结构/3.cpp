/*
3.奇偶数判断【1.4编程基础之逻辑表达式与条件分支03】
    给定一个整数，判断该数是奇数还是偶数。如果n是奇数，输出odd；如果n是偶数，输出even。 
输入:
    输入仅一行，一个大于零的正整数n。
输出:
    输出仅一行，如果n是奇数，输出odd；如果n是偶数，输出even。
样例输入:
    5
样例输出:
    odd
*/
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int n;
	cin >> n;
	if(n%2 == 0)cout <<"even\n";
	else cout << "odd\n";
	return 0;
}
