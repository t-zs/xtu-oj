#include<stdio.h>
#include<stdbool.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(n%11!=0){
			printf("0\n");
		}else{
			bool success=false;
			for(int i=0;i*11<=n;i++){
				for(int j=0;j*1001<=n;j++){
					for(int k=0;k*1111<=n;k++){
						if(i*11+j*1001+k*1111==n){
							printf("%d\n",i+j+k);
							success=true;
							break;
						}
					}
					if(success){
						break;
					}
				}
				if(success){
					break;
				}
			}
		}
	}
	
	return 0;
}
