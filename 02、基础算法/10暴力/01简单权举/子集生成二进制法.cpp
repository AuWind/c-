#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
void printf_subset(int n,int i){
	for(int j = 0;j<n;j++){
		if(i & (1<<j))printf("%d " , j);
	}
	printf("\n");
}
int main(){
	int n = 5;//101 , {4，1}
	char b[32];
	for(int i = 0;i<(1<<n);i++){
		//printf("do:%s\n",itoa(i , b , 2));
		printf_subset(n , i);
	}
	cout << isPrime(1);
	return 0;
}
