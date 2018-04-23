//【C系列6.9】分手在雨季
/*#include<stdio.h>
int main(){
	int a[10];
	int b[10]={1,1,1,1,1,1,1,1,1,1};
	int i,j,max=0;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		for(j=0;j<i;j++){
			if(a[i]>a[j]&&b[i]<b[j]+1){
				b[i]=b[j]+1;
			}
		}
		if(b[i]>max)
			max=b[i];
	}
	printf("%d\n",max);
	return 0;
}*/