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

LL acquire_mn(LL n,LL m,LL k){
	LL ans=1;
	for(int i=0;i<k;i++){
		ans=ans*(n-i)*(m-i);
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
			LL down=mul(n*m,k);
			LL up=acquire_mn(n,m,k);
			LL temp=gcd(up,down);
			up/=temp;
			down/=temp;
			printf("%lld/%lld\n",up,down);
		}
	}
	return 0;
}
