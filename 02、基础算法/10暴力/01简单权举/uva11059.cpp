#include<cstdio>
using namespace std;
int n , a[20];
long long ans;
int main(){
	int kase = 0;
	while(scanf("%d" , &n) == 1 && n){
		for(int i = 0;i<n;i++)scanf("%d" , &a[i]);
		ans = 0;
		for(int i = 0;i<n;i++){
			long long v = 1;
			for(int j = i;j<n;j++){
				v *= a[j];
				if(v > ans)ans = v;
			}
		}
		printf("%d: The maximum product is %lld.\n\n" , ++kase , ans);
	}
	return 0;
}
