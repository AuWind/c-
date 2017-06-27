#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int f[42][42][42][42],i,n,m,num[5],a[400],k,l1,l2,l3,l4;  
int main(){
	scanf("%d%d",&n,&m);  
	for (i=1;i<=n;i++)  
	 scanf("%d",&a[i]);  
	memset(num,0,sizeof(num));  
	for (i=1;i<=m;i++)  
	 {scanf("%d",&k);  
	 num[k]++;  
	 }  
	memset(f,0,sizeof(0));  
	int t;  
	f[0][0][0][0]=a[1];  
	for (l1=0;l1<=num[1];l1++)  
	 for (l2=0;l2<=num[2];l2++)  
	  for(l3=0;l3<=num[3];l3++)  
	   for(l4=0;l4<=num[4];l4++)  
		{t=l1+l2*2+l3*3+l4*4+1;  
		if(l1)f[l1][l2][l3][l4]=max(f[l1][l2][l3][l4],f[l1-1][l2][l3][l4]+a[t]);  
		if(l2)f[l1][l2][l3][l4]=max(f[l1][l2][l3][l4],f[l1][l2-1][l3][l4]+a[t]);  
		if(l3)f[l1][l2][l3][l4]=max(f[l1][l2][l3][l4],f[l1][l2][l3-1][l4]+a[t]);  
		if(l4)f[l1][l2][l3][l4]=max(f[l1][l2][l3][l4],f[l1][l2][l3][l4-1]+a[t]);  
		}  
	printf("%d",f[num[1]][num[2]][num[3]][num[4]]);  
	return 0;
}
