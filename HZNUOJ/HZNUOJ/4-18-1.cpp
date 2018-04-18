//【C系列4.13】函数训练之组合数 
/*#include<stdio.h>
int com(int x,int y);
int main()
{
    int a,b,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",com(a,b));
    }
    return 0;
} 
int com(int x,int y){
	if(x==y)
		return 1;
	else if(y==0)
		return 1;
	else
		return com(x-1,y-1)+com(x-1,y);
}*/
