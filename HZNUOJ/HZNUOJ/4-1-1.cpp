//【C系列3.16】征战的Loy
#include<stdio.h>
int main(){
	int t;
	int L,K;
	int x[5];
	scanf("%d",&t);
	while(t--){
		int i,light,count=0;
		scanf("%d %d",&L,&K);
		
		//判断光线数量
		if(K==0){
			if(L>=6&&L<11)
				light=4;
			else if(L>=11&&L<16)
				light=7;
			else if(L>=16)
				light=10;
		}else{
			if(L>=6&&L<11)
				light=5;
			else if(L>=11&&L<16)
				light=8;
			else if(L>=16)
				light=12;
		}
		//判断学长身高
		for(i=0;i<5;i++){
			scanf("%d",&x[i]);
			if(x[i]%300==0){
				if(x[i]/300<=light){
					light-=x[i]/300;
					count++;
				}
			}else {
				if(x[i]/300+1<=light){
					light=light-x[i]/300-1;
					count++;
				}
			}
		}
		//输出结果
		if(count==0)
			printf("none\n");
		else if(count==1)
			printf("first blood\n");
		else if(count==2)
			printf("double kill\n");
		else if(count==3)
			printf("triple kill\n");
		else if(count==4)
			printf("ultra kill\n");
		else if(count==5)
			printf("rampage\n");
	}
	return 0;
}