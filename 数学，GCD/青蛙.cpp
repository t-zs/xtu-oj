#include<stdio.h>
int gcd(int a,int b){
	return b>0?gcd(b,a%b):a;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d%d",&n,&k);
		if(gcd(n,k+1)==1){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	return 0;
}
