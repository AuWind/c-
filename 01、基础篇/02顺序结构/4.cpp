/*
4.大象喝水查【1.3编程基础之算术表达式与顺序执行14】
    一只大象口渴了，要喝20升水才能解渴，但现在只有一个深h厘米，底面半径为r厘米的小圆桶(h和r都是整数)。问大象至少要喝多少桶水才会解渴。
输入:
    输入有一行：包行两个整数，以一个空格分开，分别表示小圆桶的深h和底面半径r，单位都是厘米。
输出:s
    输出一行，包含一个整数，表示大象至少要喝水的桶数。
样例输入:
    23 11
样例输出:
    3
*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int h , r;
	float pi = 3.1415926 , v1;
	cin >> h >> r;
	v1 = pi*r*r*h/1000;
	printf("%d\n",int(ceil(20 / v1)));//int转整数对应%d,ceil对计算结果向上取整，但ceil处理后的数为双精浮点数。
	return 0;
}
