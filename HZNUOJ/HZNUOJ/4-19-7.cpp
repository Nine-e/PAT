//【C系列5.7】指针专题之函数指针
/*#include<stdio.h>
#include<math.h>
#include<string.h>
int max (int a,int b);
int main(){
	int a,b;
	int (*pfun)(int x, int y);
	pfun=max;
	while(scanf("%d %d",&a,&b)!=EOF){
		printf("%d\n",pfun(a,b));
	}
	return 0;
}
int max (int a,int b){
	if(b>a)
		return b;
	return a;
}*/