#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	//声明两个整形变量
    int x ,y ;
	//获取输入并存储在变量x
	cin >> x ;
	//变量y的值为变量x的10倍
	y = 10 * x;
	//使用流输出x,y的值
	cout << x << " " << y << endl;
	//使用标准输出x,y的值
	printf("%d %d\n" , x , y);
    return 0;
}


/*
程序设计：三步
1、变量存储数据
2、处理数据（数据结构和算法决定了程序设计的优劣）
3、输入数据

使用多行注释 和 单行注释有助于程序的阅读和修改
*/