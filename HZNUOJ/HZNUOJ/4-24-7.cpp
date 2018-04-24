//【C系列6.21】字符串训练之AB串 
/*#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	while(scanf("%s",s)!=EOF){
		int len = strlen(s);
		int i,j,ba=0,bb=0,e=0;*/
//错误代码
		/*for(i=0;i<len-1;i++){
			if(s[i]=='A'&&s[i+1]=='B'&&ba==0){
				ba=1;
				i++;
			}
			else if(s[i]=='B'&&s[i+1]=='A'&&bb==0){
				bb=1;
				i++;
			}
		}*/

/*
		for(i=0;i<len-1;i++){
			for(j=0;j<len-1;j++){
				if((s[j]=='B'&&s[j+1]=='A')&&(s[i]=='A'&&s[i+1]=='B')&&(j!=i+1)&&(i!=j+1))
					e=1;
			}
		}
		if(e==1)
			printf("yu ye sa wang dai xing\n");
		else
			printf("zhen shi ou ba\n");
	}
	return 0;
}*/