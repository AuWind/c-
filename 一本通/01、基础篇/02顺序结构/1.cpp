/*
1.计算浮点数相除的余【1.3编程基础之算术表达式与顺序执行11】
    计算两个双精度浮点数a和b的相除的余数，a和b都是双精度浮点数。这里余数（r）的定义是：a=k*b+r，其中k是整数，0<=r<b。
输入:
    输入仅一行，包括两个双精度浮点数a和b。
输出:
    输出也仅一行，a÷b的余数
样例输入:
    73.263 0.9973
样例输出:
    0.4601
s
*/
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	float a , b;//两个双精度浮点数
	cin >> a >> b;//获取两个浮点数并赋值给两个变量
	int k = int(a / b);//声明并计算K:a里有多少个b
	printf("%.4f\n",a-b*k);//格式输出r,保留四位小数
	return 0;
}
