//【C系列7.8】结构-8：女神历险记1 
/*#include<stdio.h>
struct gm{
	char a[100];
	int b;
};
int main(){
	int n;
	scanf("%d",&n);
	struct gm arr[100];
	int brr[100];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%s %d",arr[i].a,&arr[i].b);
		brr[i]=arr[i].b;
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(brr[i]>brr[j]){
				int t;
				t= brr[i];
				brr[i] = brr[j];
				brr[j] = t;
			}
		}
	}
	
	int x=0;
	for(i=0;i<n;i++){
		if(arr[i].b>brr[9]){
			if(x==0){
				printf("%s",arr[i].a);
				x=1;
			}else{
				printf(" %s",arr[i].a);
			}
		}
			
	}
	printf("\n");
	return 0;
}*/