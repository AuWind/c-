#include<iostream>
using namespace std;
void print_subset(int n , int * A , int cur){
	for(int i = 0;i<cur;i++)printf("%d",A[i]);
	printf("\n");
	int s = cur ?A[cur-1]+1:0;
	for(int i = s;i<n;i++){
		A[cur] = i;
		print_subset(n , A , cur+1);
	}
}
int main(){
	int n = 3;
	int a[10];
	a[0] = 1;
	int cur = 0;
	print_subset(n , a , cur);
	return 0;
}
