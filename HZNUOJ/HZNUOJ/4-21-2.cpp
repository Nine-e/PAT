//【C系列6.4】数组训练之zz买金鱼
/*#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k,m;
		scanf("%d %d %d",&n,&k,&m);
		int a[1000];
		int i,j;
		for(i=0;i<m;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<m-1;i++){
			for(j=i;j<m;j++){
				if(a[i]>a[j]){
					int p=a[i];
					a[i]=a[j];
					a[j]=p;
				}
			}
		}
		int count=0;
		for(i=0;i<k;i++){
			count+=a[i];
		}
		if(count<=n)
			printf("0\n");
		else
			printf("%d\n",count-n);
	}
	return 0;
}*/