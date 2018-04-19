//【C系列5.5】指针专题之数组排序 
/*#include<stdio.h>
#include<math.h>
int main(){
	int n;
	
	while(scanf("%d",&n)!=EOF){
	int a[10001],i=0,j;
	while(i<n){
		scanf("%d",&a[i++]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++){
			if(fabs(a[j]*1.0)<fabs(a[i]*1.0)){
				int t;
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d ",a[i]);
	}
	printf("%d\n\n",a[n-1]);
	}
	return 0;
}*/