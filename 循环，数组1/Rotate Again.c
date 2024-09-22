#include<stdio.h>

//q 矩阵表示输入的 4*4 的矩阵
int q[6][6];
//a 用来存外面那一圈矩阵
int a[16];

//实现一个 max 函数
int get_max(int a,int b){
	if(a>b){
		return a;
	}
	return b;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				scanf("%d",&q[i][j]);
			}
		}
		
		//把外面的矩阵存到 a 数组里面
		int sum=0;
		a[0]=q[0][0];
		a[1]=q[0][1];
		a[2]=q[0][2];
		a[3]=q[0][3];
		a[4]=q[1][3];
		a[5]=q[2][3];
		a[6]=q[3][3];
		a[7]=q[3][2];
		a[8]=q[3][1];
		a[9]=q[3][0];
		a[10]=q[2][0];
		a[11]=q[1][0];
		
		//连续三个数字，求这个最大的和
		int max_sum=0;
		for(int i=0;i+2<12;i++){
			sum=a[i]+a[i+1]+a[i+2];
			if(sum>max_sum){
				max_sum=sum;
			}
		}
		if(a[10]+a[11]+a[0]>max_sum){
			max_sum=a[10]+a[11]+a[0];
		}
		if(a[11]+a[0]+a[1]>max_sum){
			max_sum=a[11]+a[0]+a[1];
		}
		
		//求中间最大的数字
		int max_zhongjian=q[1][1];
		max_zhongjian=get_max(max_zhongjian,q[1][2]);
		max_zhongjian=get_max(max_zhongjian,q[2][1]);
		max_zhongjian=get_max(max_zhongjian,q[2][2]);
		
		//这个表示的是选中间最大的数字，外面的矩阵选择连续的三个数字，这三个数字的和是
		//最大的
		int ans=max_sum+max_zhongjian;
		
		//下面选中间两个元素，外面矩阵选两个连续的元素
		int a1=q[1][1]+q[1][2],a2=q[1][2]+q[2][2],a3=q[2][2]+q[2][1],a4=q[2][1]+q[1][1];
		int max_lianggezhongjian=a1;
		max_lianggezhongjian=get_max(max_lianggezhongjian,a2);
		max_lianggezhongjian=get_max(max_lianggezhongjian,a3);
		max_lianggezhongjian=get_max(max_lianggezhongjian,a4);
		
		//这个命名太傻了，下次一定不用这种命名了
		int max_waimianlianxuliange=0;
		for(int i=0;i+1<12;i++){
			if(a[i]+a[i+1]>max_waimianlianxuliange){
				max_waimianlianxuliange=a[i]+a[i+1];
			}
		}
		if(a[11]+a[0]>max_waimianlianxuliange){
			max_waimianlianxuliange=a[11]+a[0];
		}
		int ans1=max_lianggezhongjian+max_waimianlianxuliange;
		
		ans=get_max(ans,ans1);
		if(q[1][1]+q[1][2]+q[2][1]+q[2][2]>ans){
			ans=q[1][1]+q[1][2]+q[2][1]+q[2][2];
		}
		printf("%d\n",ans);
	}
	
	return 0;
}
