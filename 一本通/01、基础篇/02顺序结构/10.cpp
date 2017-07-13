/*
10.求三角形面积【1.3编程基础之算术表达式与顺序执行17】
    给定三条线段的长度，判断这三条线段是否能够构成三角形。如果能够构成，则计算其面积。
输入:
    输入只有一行，包含三个浮点数，分别表示三角形三边的边长，数与数之间以一个空格分开。
输出:
    对于可以构成三角形的情况，输出三角形的面积，保留4位小数。
    对于不能构成三角形的情况， 输出“Data Error”。
样例输入:
    3 4 5
样例输出:
    6.0000

*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	float a , b , c , p;
	bool ok;
	cin >> a >> b >> c;
	ok = a < b+c && b < a+c && c < a+b;
	if(ok){
		p = (a+b+c)/2;
		printf("%.4lf\n",sqrt(p*(p-a)*(p-b)*(p-c)));
	}else{
		printf("Data Error\n");
	}
}
