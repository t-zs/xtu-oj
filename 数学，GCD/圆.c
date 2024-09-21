#include<stdio.h>

int gcd(int a,int b){
	return b?gcd(b,a%b):a;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int r,h;
		scanf("%d%d",&r,&h);
		int fz=r*r;
		int fm=2*r*r+2*r*h;
		int temp=gcd(fz,fm);
		fz/=temp;
		fm/=temp;
		
		if(fz%fm==0){
			printf("%d\n",fz);
		}else{
			printf("%d/%d\n",fz,fm);
		}
	}
	return 0;
}
