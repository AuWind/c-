#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int n , kace;
char buff[99];
int main(){
	while(scanf("%d" , &n) == 1 && n){
		if(kace++)printf("\n");
		int cnt = 0;
		for(int fghij = 1234;;fghij++){
			int abcde = fghij * n;
			//10个数
			sprintf(buff , "%05d%05d" , abcde , fghij);//赋值未尾会自动空字符
			if(strlen(buff) > 10) break;//以开始指针到最后非空字符指针的差
			//是否重复
			bool ok = true;
			sort(buff , buff+10);//[first , last)是一个模板
			for(int i = 0;i<10;i++)if(buff[i] != '0' + i){ok = false ; break;}
			if(ok) {printf("%05d / %05d = %d\n" , abcde , fghij , n);cnt++;}
		}
		if(!cnt)printf("There are no solutions for %d.\n", n);
	}
}
