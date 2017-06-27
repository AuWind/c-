#include<iostream>
using namespace std;
int n , b[100];
void printf_subset(int n , int * B,int cur){
	if(cur == n){
		for(int i = 0;i<n;i++)
			if(B[i])printf("%d " , i);
		printf("\n");
		return ;
	}
	B[cur] = 1;
	printf_subset(n , B , cur+1);
	B[cur] = 0;
	printf_subset(n , B , cur+1);
}
int main(){
	cin >> n;
	printf_subset(n , b , 0);
	return 0;
}
