//【C系列3.15】循环训练之镂空的三角形
/*#include<stdio.h>
int main(){
	char c;
	int n;
	scanf("%c",&c);
	while(c!='@'){
		scanf("%d",&n);
		getchar();
		int i=0,j=0;
		for(i=0;i<n;i++){
			for(j=0;j<n+i;j++){
					if(j==n-i-1||j==n+i-1||i==n-1)
						printf("%c",c);
					else
						printf(" ");
			}
			printf("\n");

		}
		printf("\n");
		//fflush(stdin); //清空缓存
		scanf("%c",&c);
	}
	return 0;
}*/