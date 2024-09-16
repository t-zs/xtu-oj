#include<stdio.h>
int gcd(int a,int b){
	return b>0?gcd(b,a%b):a;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,c,d,e,f;
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		int numerator=a*c*(f+e);
		int denominator=f*d*(a+b);
		int temp_gcd=gcd(numerator,denominator);
		numerator/=temp_gcd;
		denominator/=temp_gcd;
		printf("%d %d\n",numerator,denominator);
	}
	return 0;
}
