//【C系列5.3】指针专题之生猴子 
/*#include<stdio.h>
#include<string.h>
int main(){
	char a[26],b[26];
	while(scanf("%s %s",a,b)!=EOF){
		int length=strlen(a);
		if(strlen(a)>strlen(b))
			length=strlen(b);
		int i;
		b[0]=b[0]+32;
		for(i=0;i<length;i++){
			printf("%c",a[i]);
			printf("%c",b[i]);
		}
		printf("\n");
	}
	return 0;
}*/