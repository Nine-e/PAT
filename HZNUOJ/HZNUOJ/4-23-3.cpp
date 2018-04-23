//【C系列6.10】同班同学
#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	char a[30][30];
	int i=0,j,count=0,bo=1;
	while(i<n){
		scanf("%s",&a[i]);
		i++;
	}
	int len = strlen(a[0]);
	for(i=0;i<len;i++){
		bo=1;
		for(j=0;j<n;j++){
			if(a[j][i]!=a[0][i]){
				bo=0;
				break;
			}
		}
		if(bo==0)
			break;
		if(bo==1)
			count++;
	}
	printf("%d\n",count);
	return 0;
}