//【C系列6.5】数组训练之花雕恋 
#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m,count=0,i;
		scanf("%d %d",&n,&m);
		int a[24]={-1},b[24]={-1};
		while(n--){
			int c,d;
			scanf("%d %d",&c,&d);
			int i;
			for(i=c;i<=d;i++){
				a[i]=i;
			}
		}
		while(m--){
			int c,d;
			scanf("%d %d",&c,&d);
			int i;
			for(i=c;i<=d;i++){
				b[i]=i;
			}
		}
		for(i=0;i<24;i++){
			if(a[i]==i&&a[i]==b[i])
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}