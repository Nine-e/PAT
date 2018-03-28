//【C系列3.3】发奖金
/*#include<stdio.h>
#include<math.h>
int main(void){
	int t,n,count;
	scanf("%d",&t);
	while(t--){
		count=0;
		scanf("%d",&n);
		count+=n/100;
		n=n-n/100*100;
		count+=n/50;
		n=n-n/50*50;
		count+=n/10;
		n=n-n/10*10;
		count+=n/5;
		n=n-n/5*5;
		count+=n;
		printf("%d\n",count);
	}
	return 0;
}*/