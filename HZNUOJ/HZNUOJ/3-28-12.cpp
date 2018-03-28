//¡¾CÏµÁÐ3.12¡¿Ææ¹ÖÐòÊý
#include<stdio.h>
int main(void){
	int n;
	while(scanf("%d",&n)!=EOF){
		printf("%d",n);
		if(n/100!=0)
			printf("rd");
		else
			printf("ss");
		if(n%100/10==1||n%100/10==5||n%100/10==9)
			printf("nd");
		else
			printf("ss");
		if(n%10==3||n%10==7||n%10==2)
			printf("st");
		else
			printf("ss");

		printf("\n");
	}
	return 0;
}