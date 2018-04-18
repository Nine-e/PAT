//【C系列4.12】函数训练之分苹果
/*#include<stdio.h>
int jos(int n);
int main()
{
    int n,s,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        s = jos(n);
        printf("%d ", s);
    }
    return 0;
}
int jos(int n){
	int a[1000],i,sum=0,count=0,over=0;
	for(i=0;i<=n;i++){
		a[i]=1;
	}
	for(i=1;;i++){
		sum+=a[i];
		if(sum==7){
			sum=0;
			a[i]=0;
			count++;
		}
		if(i==n)
			i=0;
		if(count==n-1){
			for(i=1;i<=n;i++){
				if(a[i]==1){
					return i ;
				}
			}
		}
	}
	
}*/