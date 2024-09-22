#include<stdio.h>
#define N 110
int q[N];

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&q[i]);
		}
		int ans=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				for(int k=j+1;k<n;k++){
					int a=q[i],b=q[j],c=q[k];
					if((a+b>c)&&(a-b<c)&&(a*a+b*b>c*c)&&(a*a+c*c>b*b)&&(b*b+c*c>a*a)){
						ans++;
					}
				}
			}
		}
		printf("%d\n",ans);
	}
	
	return 0;
}
