//【C系列3.10】节奏大师
/*#include<stdio.h>
int main(void){
	int t,a,b,c;
	scanf("%d",&t);
	while(t--){
		int min=0,max=0;
		int i;
		scanf("%d %d %d",&a,&b,&c);
		for(i=0;i<a;i++){
			min+=300*(i*2+1);
		}
		for(i=0;i<c;i++){
			max+=50*(i*2+1);
		}
		for(i=a;i<a+b;i++){
			min+=100*(i*2+1);
		}
		for(i=c;i<c+b;i++){
			max+=100*(i*2+1);
		}
		for(i=a+b;i<a+b+c;i++){
			min+=50*(i*2+1);
		}
		for(i=c+b;i<a+b+c;i++){
			max+=300*(i*2+1);
		}
		printf("%d %d\n",min,max);

	}
	return 0;

}*/
/*#include<stdio.h>
int main(){
	int a,b,c,t;
	int d,e;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&c,&b,&a);
		d=300*c*c+100*(2*b*c+b*b)+50*(2*a*b+2*a*c+a*a);
		e=50*a*a+100*(2*a*b+b*b)+300*(2*a*c+2*b*c+c*c);
		printf("%d %d\n",d,e);
	}
}*/