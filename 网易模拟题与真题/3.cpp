#include<stdio.h>
int main(void){
	int n,r;
	int count=0,sum=0;
	int i;
	scanf("%d %d",&n,&r);
	sum=n*(n+1)/2;
	if(sum%3==0)
		count++;
	for(i=n+1;i<=r;i++){
		sum=sum+i;
		if(sum%3==0)
			count++;
	}
	printf("%d",count);
	return 0;
}