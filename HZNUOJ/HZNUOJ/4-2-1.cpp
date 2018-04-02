//【C系列3.17】完全幸运数
/*#include<stdio.h>
int main(){
	int n,x=0,not=0;
	scanf("%d",&n);
	while(n>0){
		if(n%10==4||n%10==7){
			x++;
			n=n/10;
		}else{
			not=1;
			break;
		}  
	}
	if(not==0&&(x==4||x==7))
		printf("YES\n");
	else
		printf("NO\n");
	return 0;

}*/
