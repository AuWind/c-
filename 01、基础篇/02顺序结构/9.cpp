/*
9.苹果和虫子【1.3编程基础之算术表达式与顺序执行15】
    你买了一箱n个苹果，很不幸的是买完时箱子里混进了一条虫子。虫子每x小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，那么经过y小时你还有多少个完整的苹果？
输入:
    输入仅一行，包括n，x和y（均为整数）。
输出:
    输出也仅一行，剩下的苹果个数
样例输入:
    10 4 9
样例输出:
    7

*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	
	double n , x ,y , n1;
	cin >> n >> x >> y;
	n1 = ceil(y / x);
	printf("%.0lf\n",n-n1);
	
	/*
	int n,x,y;
	cin >> n >> x >>y;
	printf("%d\n",n-int(ceil(double(y)/x)));
	*/
}
