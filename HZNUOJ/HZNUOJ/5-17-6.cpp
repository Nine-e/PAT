//【C系列7.11】结构-11 女神历险记4
#include<stdio.h>
#include<string.h>
struct gm{
	int a;
	char b[20];
};
int main(){
	int t,n;
	scanf("%d %d",&t,&n);
	int i,j;
	struct gm arr[100];
	for(i=0;i<t;i++){
		scanf("%d %s",&arr[i].a,&arr[i].b);
	}
	int brr[100];
	for(j=0;j<n;j++){
		scanf("%d",&brr[j]);
	}
	for(j=0;j<n;j++){
		
		for(i=0;i<t;i++){
			if(arr[i].a==brr[j]){
				printf("%s",arr[i].b);
				if(j<n-1){
					printf(" ");
				}
				break;
			}
		}
	}
	
	return 0;
}