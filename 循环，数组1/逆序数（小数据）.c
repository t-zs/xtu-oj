#include<stdio.h>
#define N 100010
int q[N],tmp[N];
#define LL long long

LL merge(int l,int r){
	if(l>=r){
		return 0;
	}
	int mid=(l+r)/2;
	LL res=merge(l,mid)+merge(mid+1,r);
	
	int i=l,j=mid+1;
	int k=0;
	while(i<=mid&&j<=r){
		if(q[i]<=q[j]){
			tmp[k++]=q[i++];
		}else{
			tmp[k++]=q[j++];
			res=res+(mid-i+1);
		}
	}
	while(i<=mid){
		tmp[k++]=q[i++];
	}
	while(j<=r){
		tmp[k++]=q[j++];
		res=res+(mid-i+1);//这一步到底要不要加，加不加都不影响
	}
	for(i=l,j=0;i<=r;i++,j++){
		q[i]=tmp[j];
	}
	return res;
}

int main(){
	int n;
	while(scanf("%d",&n)){
		if(n==0){
			break;
		}
		for(int i=0;i<n;i++){
			scanf("%d",&q[i]);
		}
		printf("%lld\n",merge(0,n-1));
	}
	return 0;
}
