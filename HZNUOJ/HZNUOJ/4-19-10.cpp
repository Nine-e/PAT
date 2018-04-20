//【C系列5.10】指针专题之月份对应 
/*#include<stdio.h>
#include<string.h>
int main(){
	int n;
	char *a[15]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	while(scanf("%d",&n)!=EOF){
		if(n>12)
			printf("Oh my God!");
		else
			printf(*(a+n-1));
		printf("\n");
	}
	return 0;
}*/