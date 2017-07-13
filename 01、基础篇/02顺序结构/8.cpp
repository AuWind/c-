/*
8.计算2的幂【1.3编程基础之算术表达式与顺序执行20】
    给定非负整数n，求2^n的值，即2的n次方。
输入:
    一个整数n。0 <= n < 31。
输出:
    一个整数，即2的n次方。
样例输入:
    3
样例输出:
    8
*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	double a = 2, n;
	cin >> n;
	printf("%.0lf\n",pow(a,n));
	return 0;
}
