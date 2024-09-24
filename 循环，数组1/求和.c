#include<stdio.h>
#include<stdbool.h>
#define N 1000010

int primes[N];
bool not_prime[N];
int cnt;
long long sum[N];

void init(){
	not_prime[0]=true;
	not_prime[1]=true;
	for(int i=2;i<N;i++){
		if(!not_prime[i]){
			primes[cnt++]=i;
		}
		
		for(int j=0;primes[j]*i<N;j++){
			not_prime[primes[j]*i]=true;
			if(i%primes[j]==0){
				break;
			}
		}
	}
}

void init2(){
	for(int i=1;i<N;i++){
		if(not_prime[i]==true){
			sum[i]=sum[i-1]+i;
		}else{
			sum[i]=sum[i-1]-i;
		}
	}
}

int main(){
	init();
	init2();
	
	int t;
	scanf("%d",&t);
	while(t--){
		long long a,b;
		scanf("%lld%lld",&a,&b);
		printf("%lld\n",sum[b]-sum[a-1]);
	}
	
	return 0;
}
