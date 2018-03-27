/*#include<stdio.h>
int main(void){
	int n,i;
	int L=0,R=0;
	char a[1000];
	char p='N';
	scanf("%d",&n);
	scanf("%s",&a);
	for(i=0;i<n;i++){
		if(a[i]=='L'){
			L++;
		}
		else if(a[i]=='R'){
			R++;
		}
	}
	if(L>R){
		if((L-R)%4==1){
			p='W';
		}else if((L-R)%4==2){
			p='S';
		}
		else if((L-R)%4==3){
			p='E';
		}
	}
	else if(R>L){
		if((R-L)%4==1){
			p='E';
		}else if((R-L)%4==2){
			p='S';
		}else if((R-L)%4==3){
			p='W';
		}
	}
	else if(R==L){
		p='N';
	}
	printf("%c",p);
	return 0;
}*/
