//【C系列4.10】函数训练之全排列
#include<stdio.h>
#include<string.h>
#define length 100
char a[length];
int book[length]={0};
int count=0;
void dfs(int n,int len,char s[]);
void main(){
	int t;
	char s[length];
	scanf("%d",&t);
	fflush(stdin);
	while(t--){
		scanf("%s",s);
		int len=strlen(s);
		count=0;
		int i,j;
		for(i=0;i<len;i++){
			for(j=i+1;j<len;j++){
				if((int)s[i]>(int)s[j]){
					int temp=s[i];
					s[i]=s[j];
					s[j]=temp;
				}
			}
		}
		//printf("%s\n",s);
		dfs(0,len,s);
	}
}
void dfs(int n,int len,char s[]){
	int i,sum=1;
	for(i=1;i<=len;i++){
		sum*=i;
	}
	if(n==len){
		for(i=0;i<len;i++){
			printf("%c",a[i]);
		}
		count+=1;
		if(count==sum){
			printf("\n");
		}else{
			printf(" ");}
		return;
	}
	for(i=0;i<len;i++)
	{
		if(book[i]==0){
		a[n]=s[i];
		book[i]=1;
		dfs(n+1,len,s);
		book[i]=0;
		}
	}
	return;
}