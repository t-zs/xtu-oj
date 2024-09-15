#include<stdio.h>
int gcd(int a,int b){
	return b>0?gcd(b,a%b):a;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d %d",&n,&m);
		if(m==0){
			printf("0\n");
		}else{
			if(n==m){
				printf("1\n");
			}else{
				if(m<3){
					printf("0\n");
				}else{
					int a=m*(m-1)*(m-2);
					int b=n*(n-1)*(n-2);
					int ab_gcd=gcd(a,b);
					a/=ab_gcd;
					b/=ab_gcd;
					printf("%d/%d\n",a,b);
				}
			}
		}
	}
	return 0;
}
