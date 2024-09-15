#include<stdio.h>
long long gcd(long long a,long long b){
	return b>0?gcd(b,a%b):a;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a,b;
		scanf("%lld %lld",&a,&b);
		//分子
		long long numerator=1;
		//分母
		long long denominator=a;
		for(int i=a+1;i<=b;i++){
			numerator=numerator*i+denominator;
			denominator=denominator*i;
			//分子分母的最大公约数
			int temp_gcd=gcd(denominator,numerator);
			denominator/=temp_gcd;
			numerator/=temp_gcd;
		}
		printf("%lld/%lld\n",numerator,denominator);	
	}
	return 0;
}
