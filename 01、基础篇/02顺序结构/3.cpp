/*
3.反向输出一个三位数【1.3编程基础之算术表达式与顺序执行13】
    将一个三位数反向输出，例如输入358，反向输出853。
输入:
    一个三位数n。
输出:
    反向输出n。
样例输入:
    100
样例输出:
    001
*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int n,n1,n2,n3;
	cin >> n;
	n1 = n / 100;
	n2 = (n/10)%10;//除和取模运算是优先级是同级的，且是从左往右的，不加括号是可以，但在不能十分确认的时候加括号更能保证计算顺序
	n3 = n % 10;
	printf("%d%d%d\n",n3,n2,n1);
	return 0;
}
