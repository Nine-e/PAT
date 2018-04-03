//【C系列4.8】函数训练之被甩 
/*#include<stdio.h>
long long f(int m,int n);
void main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int m;
		scanf("%d",&m);
		printf("%lld\n",f(m,30));
	}
}
long long f(int m,int n){
	if(n==1)
		return 1;
	else if(n==2)
		return m;
	else
		return f(m,n-1)+f(m,n-2)*2;
}*/