//【C系列5.9】指针专题之字符串比较
/*#include<stdio.h>
#include<string.h>
int stremp(char *p1,char *p2);
int main(){
	char s1[100],s2[100];
	while(scanf("%s %s",s1,s2)!=EOF){
		printf("%d\n",stremp(s1,s2));
	}
	return 0;
}
int stremp(char *p1,char *p2){
	int i=0;
	while(*(p1+i)!='\0'){
		if(*(p1+i)==*(p2+i))
			i++;
		else
			return (int)*(p1+i)-*(p2+i);
	}
	return 0;
}*/