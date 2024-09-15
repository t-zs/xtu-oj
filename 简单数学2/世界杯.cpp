#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		double w1=1,d1=1,l1=1;
		while(n--){
			double w,d,l;
			scanf("%lf %lf %lf",&w,&d,&l);
			if(w>=w1){
				w1=w;
			}
			if(d>=d1){
				d1=d;
			}
			if(l>=l1){
				l1=l;
			}			
		}
		double sum=1/w1+1/d1+1/l1;
		if(sum<1){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	return 0;
}
