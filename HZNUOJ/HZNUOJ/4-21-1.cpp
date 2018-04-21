//【C系列6.3】数组训练之脸型吻合度
/*#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		int a[100][100];
		scanf("%d %d",&n,&k);
		int i,j,count=0;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				scanf("%d",&a[i][j]);
				if(i<j&&a[i][j]>k)
					count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}*/