/*#include<stdio.h>
int main(void){
	int n,k;
	int count=0;
	int x,y;
	scanf("%d %d",&n,&k);
	for(y=1;y<=n;y++){
		for(x=y;x<=n;x++){
			if(x%y>=k)
				count++;
		}	
	}
	if(k!=0){
		if((n-k)%2==1)
			count=count+(n-k+1)*((n-k)/2)+(n-k+1)/2;
		else
			count=count+(n-k+1)*((n-k)/2);
	}else{
		count=count+(n-k)*(n-k)+n*n;
	}
	printf("%d",count);
	return 0;
}*/