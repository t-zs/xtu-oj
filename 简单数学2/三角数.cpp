#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		long long st=(1+n-1)*(n-1)/2+1;
		long long ed=st+n-1;
		if(st%2!=0){
			st++;
		}
		if(ed%2!=0){
			ed--;
		}
		long long ans=(ed-st)/2+1;
		printf("%lld\n",ans);
	}
	return 0;
}
