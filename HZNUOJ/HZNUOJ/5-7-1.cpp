//【C系列7.1】结构-1 有趣的外号
/*#include<stdio.h>
struct w{
	char a[21];
	int b;
};
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,i,j;
		struct w p[100];
		struct w t;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%s %d",p[i].a,&p[i].b);
		}
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(p[j].b>p[i].b){
					t=p[i];
					p[i]=p[j];
					p[j]=t;
				}
			}
		}
		for(i=0;i<n;i++){
			printf("%s\n",p[i].a);
		}
	}
	return 0;
}*/