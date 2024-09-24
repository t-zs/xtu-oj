#include<stdio.h>
#include<stdbool.h>

char c[15];
int a[15];
int b[15];

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%s",c);
		for(int i=0;i<9;i++){
			a[i]=c[i]-'0';
		}
//		int line1=a[0]+a[1]+a[2];
//		int line2=a[3]+a[4]+a[5];
//		int line3=a[6]+a[7]+a[8];
//		
//		int col1=a[0]+a[3]+a[6];
//		int col2=a[1]+a[4]+a[7];
//		int col3=a[2]+a[5]+a[8];
//		
//		int hh1=a[0]+a[4]+a[8];
//		int hh2=a[2]+a[4]+a[6];
		
		bool success=true;
		//突然发现可以把上面的放到一个数组里面
		b[0]=a[0]+a[1]+a[2];
		b[1]=a[3]+a[4]+a[5];
		b[2]=a[6]+a[7]+a[8];
		
		b[3]=a[0]+a[3]+a[6];
		b[4]=a[1]+a[4]+a[7];
		b[5]=a[2]+a[5]+a[8];
		
		b[6]=a[0]+a[4]+a[8];
		b[7]=a[2]+a[4]+a[6];
		
		for(int i=0;i<7;i++){
			if(b[i]!=b[i+1]){
				success=false;
				break;
			}
		}
		
		if(success){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	
	return 0;
}
