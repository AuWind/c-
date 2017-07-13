/*
2.计算球的体积【1.3编程基础之算术表达式与顺序执行12】
    对于半径为r的球，其体积的计算公式为V=4/3*πr3，这里取π=3.14。现给定r，即球半径，类型为double，求球的体积V，保留到小数点后2位。
输入:
    输入为一个不超过100的非负实数，即球半径，类型为double。
输出:
   输出一个实数，即球的体积，保留到小数点后2位。
样例输入:
    4
样例输出:
    267.95

*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	const float pi = 3.14;
	double r;
	cin>>r;
	//printf("%.2f\n",4/3*pi*r*r*r);为什么这样写是错误的？？？？？？？
	printf("%.2f\n",pi*r*r*r*4/3);
	printf("%.2f\n",pi*pow(r,3)*4/3);//使用cmath的数学库里的pow计算次方
	return 0;
}
