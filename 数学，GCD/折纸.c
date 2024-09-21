#include<stdio.h>

long long  gcd(long long a, long long b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		long long a, b;
		scanf("%lld %lld",&a,&b);
		long long fz,fm;
		fz = 2*b*b*b;
		fm = 2*(4*a*a+b*b);
		long long  temp = gcd(fz,fm);
		if(fz%fm==0)
		{
			printf("%lld\n",fz/temp);
		}
		else
		{
			printf("%lld/%lld\n",fz/temp,fm/temp);
		}
	}
	return 0;
}
