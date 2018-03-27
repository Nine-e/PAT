#include<stdio.h>
int main(void){
	int n,r;
	int count=0;
    long long sum=0;
	int i;
	scanf("%d %d",&n,&r);
	sum=n*(n+1)/2;
	if(sum%3==0){
		count++;
		sum=0;
	}
	for(i=n+1;i<=r;i++){
		sum=sum+i;
		if(sum%3==0){
			count++;
			sum=0;
		}

	}
	printf("%d",count);
	return 0;
}