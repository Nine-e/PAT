//【C系列4.5】函数训练之最大公约数
/*#include<stdio.h>
int gcd(int x,int y);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        printf("%d ",gcd(n,m));
    }
    return 0;
}
int gcd(int x,int y){
	if(y>x){
		int t=x;
		x=y;
		y=t;
	}
	do{
		int t=y;
		y=x%y;
		x=t;
	}while(y!=0);
	  return x;
}*/