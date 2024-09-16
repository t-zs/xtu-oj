#include<stdio.h>
#define LL long long
LL gcd(LL a,LL b){
	return b?gcd(b,a%b):a;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		LL a,b,c;
		scanf("%lld %lld %lld",&a,&b,&c);
		LL numerator=c*a*a-a*b*b+b*c*c;
		LL denominator=a*b*c;
		LL temp_gcd=gcd(numerator,denominator);
		if(numerator%denominator==0){
			printf("%lld\n",numerator/denominator);
		}else{
			numerator/=temp_gcd;
			denominator/=temp_gcd;
			if(denominator<0){
				printf("%lld/%lld\n",-numerator,-denominator);
			}else{
				printf("%lld/%lld\n",numerator,denominator);
			}
		}
	}
	return 0;
}
