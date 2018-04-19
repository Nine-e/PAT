//【C系列5.4】指针专题之分割字符串 
/*#include<stdio.h>
#include<string.h>
int main(){
	char a[10001];
	while(gets(a)){
		int i;
		for(i=0;i<strlen(a);i++){
			if(a[i]==' '&&a[i+1]!=' ')
				a[i]='\n';
		}
		for(i=0;i<strlen(a);i++){
			if(a[i]!=' ')
			printf("%c",a[i]);
		}
		printf("\n\n");
	}
	return 0;
}*/