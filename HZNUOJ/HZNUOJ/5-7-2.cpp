//【C系列7.2】结构-2 分数评级 
/*#include<stdio.h>
struct w{
	long long n;
	char m[20];
	int s;
};
int main(){
	int x,y,i;
	struct w p[20];
	scanf("%d %d",&x,&y);
	for(i=0;i<x;i++){
		scanf("%lld %s %d",&p[i].n,p[i].m,&p[i].s);
	}
	while(y--){
		long long d;
		scanf("%lld",&d);
		for(i=0;i<x;i++){
			if(d==p[i].n){
				switch(p[i].s/10){
					case 10:
					case 9:printf("A\n");
						break;
					case 8:printf("B\n");
						break;
					case 7:printf("C\n");
						break;
					case 6:printf("OK\n");
						break;
					default:printf("ARE YOU PIG?\n");
						break;
				}
				break;
			}
			
		}
	}
	return 0;
}*/