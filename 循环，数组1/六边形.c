#include<stdio.h>

int a[30];
int out[30];
int in_six[30];

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		for(int i=0;i<19;i++){
			scanf("%d",&a[i]);
		}
		
		for(int i=1,j=0;i<=6;i++,j++){
			in_six[j]=a[i];
		}
		int min_inner_three=1000000000;
		for(int i=0;i+2<6;i++){
			if(in_six[i]+in_six[i+1]+in_six[i+2]<min_inner_three){
				min_inner_three=in_six[i]+in_six[i+1]+in_six[i+2];
			}
		}
		if(in_six[4]+in_six[5]+in_six[0]<min_inner_three){
			min_inner_three=in_six[4]+in_six[5]+in_six[0];
		}
		if(in_six[5]+in_six[0]+in_six[1]<min_inner_three){
			min_inner_three=in_six[5]+in_six[0]+in_six[1];
		}
		
		for(int i=7,j=0;i<19;i++,j++){
			out[j]=a[i];
		}
		int min_three_out=100000000;
		for(int i=0;i+2<12;i++){
			if(out[i]+out[i+1]+out[i+2]<min_three_out){
				min_three_out=out[i]+out[i+1]+out[i+2];
			}
		}
		if(out[10]+out[11]+out[0]<min_three_out){
			min_three_out=out[10]+out[11]+out[0];
		}
		if(out[11]+out[0]+out[1]<min_three_out){
			min_three_out=out[11]+out[0]+out[1];
		}
		
		int ans1=min_inner_three+min_three_out+a[0];
		int sum=0;
		for(int i=0;i<6;i++){
			sum+=in_six[i];
		}
		int ans2=sum+a[0];
		if(ans1>ans2){
			printf("%d\n",ans2);
		}else{
			printf("%d\n",ans1);
		}
	}
	
	return 0;
}
