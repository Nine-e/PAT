//【C系列7.9】结构-9：女神历险记2 
/*#include<stdio.h>
struct gm{
	int a,b,c;
};
int main(){
	int n;
	scanf("%d",&n);
	struct gm arr[100];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d %d %d",&arr[i].a,&arr[i].b,&arr[i].c);
	}
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i].b>arr[j].b){
				struct gm x;
				x=arr[i];
				arr[i]=arr[j];
				arr[j]=x;
			}
			
		}
	}
	printf("%d ",arr[9].a);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i].c<arr[j].c){
				struct gm x;
				x=arr[i];
				arr[i]=arr[j];
				arr[j]=x;
			}
			
		}
	}
	printf("%d\n",arr[9].a);
	return 0;

}*/