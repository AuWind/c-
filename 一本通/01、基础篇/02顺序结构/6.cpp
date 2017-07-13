/*
6.计算三角形面积【1.3编程基础之算术表达式与顺序执行18】
    平面上有一个三角形，它的三个顶点坐标分别为(x1, y1), (x2, y2), (x3, y3)，那么请问这个三角形的面积是多少，精确到小数点后两位。
输入:
    输入仅一行，包括6个单精度浮点数，分别对应x1, y1, x2, y2, x3, y3。
输出:
    输出也是一行，输出三角形的面积，精确到小数点后两位。
样例输入:s
    0 0 4 0 0 3
样例输出:
    6.00
*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	float x1,y1,x2,y2,x3,y3,a,b,c ,p;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	//利用勾股定理分别计算三边的长度
	a = sqrt(pow(abs(x1-x2),2) + pow(abs(y1-y2),2));
	b = sqrt(pow(abs(x2-x3),2) + pow(abs(y2-y3),2));
	c = sqrt(pow(abs(x3-x1),2) + pow(abs(y3-y1),2));
	p = (a+b+c) / 2;
	printf("%.2lf\n",sqrt(p*(p-a)*(p-b)*(p-c)));
	return 0;
}
