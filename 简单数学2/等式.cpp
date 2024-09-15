#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define N 1000010
bool is_q[N];

//把完全平方数存进数组里面，用数组下标查询只需要 O(1) 的时间
void init(){
	for(int i=1;i<=1000;i++){
		is_q[i*i]=true;
	}
}

int main(){
	init();
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int ans=0;
		for(int i=1;i<=1000;i++){
			for(int j=1;j<=i;j++){
				if(i*i+j*j<n){
					int k=n-i*i-j*j;
					if(is_q[k]){
						if(sqrt(k)<=j){
							ans++;
						}
					}
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
