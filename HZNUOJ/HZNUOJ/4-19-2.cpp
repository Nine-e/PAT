//【C系列5.2】指针专题之好朋友的属相 
/*#include<stdio.h>
int main(){
	int n;
	//char a[12][4]={"鼠","牛","虎","兔","龙","蛇","马","羊","猴","鸡","狗","猪"};
	char a[12][10]={"mouse","cow","tigger","rabbit","dragon","snake","horse","sheep","monkey","chick","dog","pig"};
	while(scanf("%d",&n)!=EOF){
		if(n>=1996){
			printf("%s\n",a[(n-1996)%12]);
		}
		else if(n>0)
			printf("%s\n",a[11-(1995-n)%12]);
		else
			printf("%s\n",a[11-(1995-n-1)%12]);
	}
}*/