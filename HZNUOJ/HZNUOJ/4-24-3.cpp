//【C系列6.17】字符串训练之吉祥物的检讨书 
/*#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char c[20];
		char s[1000];
		scanf("%s",c);
		getchar();
		gets(s);
		int a = strlen(c);
		int b = strlen(s);

		int i,j,k;
		for(i=0;i<b;i++){
			for(j=0;j<a;j++){
				if(s[i+j]!=c[j])
					break;
			}
			if(j==a){
				printf("doctorZ");
				i+=a-1;
			}
			else
				printf("%c",s[i]);
		}
		printf("\n");
	}
	return 0;
}*/