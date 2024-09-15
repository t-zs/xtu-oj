#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		if(a==b||a==c||b==c){
			printf("Yes\n");
		}else if(a+b==c||a+c==b||b+c==a){
			printf("Yes\n");
		}else if(a-b==abs(c)||a-c==abs(b)||b-a==abs(c)||b-c==abs(a)||c-a==abs(b)||c-b==abs(a)){
			printf("Yes\n");
		}else if(a/b==c||a/c==b||b/c==a||b/a==c||c/a==b||c/b==a){
			printf("Yes\n");
		}else if(a*b==c||a*c==b||b*c==a){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	return 0;
}
