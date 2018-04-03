//【C系列4.3】函数训练之素数判断（预处理篇）
/*#include<stdio.h>
#include<string.h>
#include<math.h>
int isPrime[1000011];
void getprime();
int main()
{
    int t;
    scanf("%d",&t);
    getprime();
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(isPrime[n])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
} 
void getprime(){
	int i,j;
	for(i=2;i<=1000010;i++){
		isPrime[i]=1;
	}
	for(i=2;i<=1000010;i++){
		if(isPrime[i]==1){
			for(j=i+i;j<=1000011;j+=i){
					isPrime[j]=0;
			}
		}
	}
}*/
	
