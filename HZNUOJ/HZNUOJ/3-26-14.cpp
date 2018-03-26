//【C系列2.14】进制转化 
#include<stdio.h>
int main(void){
	char c;
	int a;
	scanf("%c",&c);
	a=(int)c;
	printf("DEC:%d\n",a);
	printf("OCT:%o\n",a);
	printf("HEX:%x\n",a);
	return 0;
}