#include<stdio.h>

long long Red[30];
long long Yellow[30];

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int k=0;
		int w=0;
		while(n--){
			long long x, y;
			char c;
			scanf(" %c",&c);
			scanf("%lld%lld",&x,&y);
			if(c=='R'){
				Red[k++]=x*x+y*y;
			}else{
				Yellow[w++]=x*x+y*y;
			}
		}
		long long min_red=Red[0];
		for(int i=0;i<k;i++){
			if(Red[i]<min_red){
				min_red=Red[i];
			}
		}
		int min_yellow=Yellow[0];
		for(int i=0;i<w;i++){
			if(Yellow[i]<min_yellow){
				min_yellow=Yellow[i];
			}
		}
		
		long long score_red=0;
		for(int i=0;i<k;i++){
			if(Red[i]<min_yellow){
				score_red++;
			}
		}
		long long score_yellow=0;
		for(int i=0;i<w;i++){
			if(Yellow[i]<min_red){
				score_yellow++;
			}
		}
		
		if(score_yellow==0){
			printf("Win %lld\n",score_red);
		}else{
			printf("Lose %lld\n",score_yellow);
		}
		
		for(int i=0;i<30;i++){
			Red[i]=0,Yellow[i]=0;
		}
	}
	
	return 0;
}
