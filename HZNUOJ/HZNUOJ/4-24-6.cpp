//【C系列6.20】字符串训练之wjn比较单词大小
/*#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,j,i;
		scanf("%d",&n);
		char a[50][20];
		char max[20]="";
		for(i=0;i<n;i++){
			scanf("%s",a[i]);
			if(strlen(a[i])>strlen(max)||(strlen(a[i])==strlen(max)&&strcmp(a[i],max)>0)){
				    strcpy(max,a[i]);
				}   
		}
		
		printf("%s\n",max);
	}
	return 0;
}*/