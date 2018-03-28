//【C系列3.9】输出素数
/*#include<stdio.h>
int main(void){
	int a,b;
	scanf("%d %d",&a,&b);
	int i,j;
	int notSu=0;
	for(i=a;i<=b;i++){
		notSu=0;
		for(j=2;j<=i/2+1;j++){
			if(i%j==0&&i!=2){
				notSu=1;
				break;
			}
		}
		if(notSu==0){
			printf("%d\n",i);
		}
	}
	return 0;
}*/

