//【C系列6.16】字符串之zz喜欢回文串
/*#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[200];
		scanf("%s",s);
		int len = strlen(s);
		int bo = 1;
		int i;
		for(i=0;i<len/2;i++){
			if(s[i]!=s[len-1-i])
			{
				bo=0;
				break;
			}
		}
		if(bo==1)
			printf("zz happy!\n");
		else
			printf("zz cry\n");
	}
	return 0;
}*/