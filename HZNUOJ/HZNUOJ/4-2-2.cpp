//【C系列3.18】循环训练之打印数字图形 
/*#include<stdio.h>
#include<math.h>
void main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int i,j;
		for(i=0;i<n*2-1;i++){
			for(j=-1;j<abs(i+1-n);j++){
				printf(" ");
			}
			if(i<n){
			for(j=1;j<=i+1;j++){
				printf("%d",j);
			}
			for(j=i;j>=1;j--){
				printf("%d",j);
			}}
			else{
				for(j=1;j<=2*n-i-1;j++){
				printf("%d",j);
			}
			for(j=2*n-i-2;j>=1;j--){
				printf("%d",j);
			}
			}
			printf("\n");
		}
		printf("\n");
	}
}*/