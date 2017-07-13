/*
7.A*B问题【1.3编程基础之算术表达式与顺序执行19】
    输入两个正整数A和B，求A*B的值。注意乘积的范围和数据类型的选择。
输入:
    一行，包含两个正整数A和B，中间用单个空格隔开。1 <= A,B <= 50000。
输出:
    一个整数，即A*B的值。
样例输入:
    3 4
样例输出:
    12
*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	/*
	long long  a , b , c;
	cin >> a >> b;
	c = a*b;
	cout << c;
	*/
	long long a , b , c;
	cin >> a >> b;
	c = a*b;
	printf("%lld\n",c);
	return 0;
}
