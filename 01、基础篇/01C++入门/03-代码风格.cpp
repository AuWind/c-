/*
AuWind
三角形：输入三角形（*）的层数
*/
#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++){//每行
		
		int x = n*2 - (i * 2);//空格数
		for(int j = 1;j <= x;j++) cout << " ";
			
		int y = i * 2 - 1;//字符数
		for(int j = 1;j <= y;j++) cout << "* ";
			
		cout << "\n";
	}
    return 0;
}
/*
1.逐层缩进：能使代码的从属关系分明，写代码时思路更加清晰，也更易读。
2.程序本身不是智能的，代码体现着我们如何解决问题的。
*/
