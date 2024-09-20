#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int a, b, c,temp;
		scanf("%d %d %d",&a,&b,&c);
		if(a>b)
		{
			temp = a;
			a = b;
			b = temp;
		}
		if(a>c)
		{
			temp = a;
			a = c;
			c = temp;
		}
		if(b>c)
		{
			temp = b;
			b = c;
			c = temp;
		}
		if(a*b-c==0||a+b-c==0)
		{
			printf("Yes\n");
		}
		else
			printf("No\n");
	}
}
