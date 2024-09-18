#include<stdio.h>
#define LL long long 

LL gcd(LL a,LL b){
	return b?gcd(b,a%b):a;
}
LL mul(LL n,LL k){
	LL ans=1;
	for(int i=0;i<k;i++){
		ans=ans*(n-i);
	}
	return ans;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		LL n,m,k;
		scanf("%lld%lld%lld",&n,&m,&k);
		if(k>m||k>n){
			printf("0\n");
		}else if(k==1){
			printf("1\n");
		}else{
			LL x=mul(n,k)*mul(m,k);
			LL y=mul(n*m,k);
			LL temp=gcd(x,y);
			x/=temp;
			y/=temp;
			printf("%lld/%lld\n",x,y);
		}
	}
	return 0;
}
