/*
5.计算线段长度【1.3编程基础之算术表达式与顺序执行16】
    已知线段的两个端点的坐标A(Xa,Ya)，B(Xb，Yb)，求线段AB的长度，保留到小数点后3位。
输入:
    第一行是两个实数Xa，Ya，即A的坐标。
    第二行是两个实数Xb，Yb，即B的坐标。
    输入中所有实数的绝对值均不超过10000。
输出:s
    一个实数，即线段AB的长度，保留到小数点后3位。
样例输入:
    1 1
    2 2
样例输出:
    1.414s
*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	float xa,ya,xb,yb;//坐标为实数，也就是浮点数。
	cin >> xa >> ya >> xb >> yb;
	printf("%.3lf",sqrt(pow(xa-xb,2)+pow(ya-yb,2)));//利用勾股定理，求斜边长度c=sqrt(pow(a,2)+pow(b,2));
	return 0;
}
