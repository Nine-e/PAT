//【C系列7.10】结构-10 女神历险记3 
/*#include<stdio.h>
struct gm{
	int a,b;
};
int main(){
	int n;
	scanf("%d",&n);
	struct gm arr[100];
	int i,j,p=0;
	for(i=0;i<n;i++){
		scanf("%d %d",&arr[i].a,&arr[i].b);
	}
	int min,max;
	scanf("%d %d",&min,&max);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i].a>arr[j].a){
				struct gm x;
				x=arr[i];
				arr[i]=arr[j];
				arr[j]=x;
			}
			
		}
	}
	for(i=0;i<n;i++){
		if(arr[i].b>=(arr[i].a*1.0/min-arr[i].a*1.0/max)){
			printf("%.2lf\n",arr[i].a*1.0/min);
			p=1;
			break;
		}
	}
	if(p==0)
		printf("let_s_die_together\n");
	return 0;
}*/