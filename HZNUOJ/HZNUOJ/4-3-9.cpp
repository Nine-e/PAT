//【C系列4.9】函数训练之汉诺塔问题
#include<stdio.h>

void move(int n,char c1,char c2,char c3);
int main()
{
    int n;
    scanf("%d",&n);
    move(n,'a','b','c');
	return 0;
}
void move(int n,char c1,char c2,char c3){
	if(n==1)
		printf("%c->%c\n",c1,c3);
	else{
		move(n-1,c1,c3,c2);
		printf("%c->%c\n",c1,c3);
		move(n-1,c2,c1,c3);
	}
}