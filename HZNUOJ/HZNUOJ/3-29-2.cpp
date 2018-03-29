//【C系列3.14】过五一 
/*#include<stdio.h>
int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		int i,d=0,z=2,m=0;
		scanf("%d",&n);
		if(n<2018){
			for(i=n;i<2018;i++){
				if(((i+1)%100!=0&&(i+1)%4==0)||((i+1)%100==0))
					d+=2;
				else
					d+=1;
			}
			d=d%7;
			if(d==1)
				z=1;
			else
				z=9-d;
		}
		else if(n>2018){
			for(i=2018;i<n;i++){
				if((i%100!=0&&i%4==0)||(i%100==0))
					d+=2;
				else
					d+=1;
			}
			d=d%7;
			if(d==5)
				z=7;
			else
			   z=(2+d)%7;
		}
		if(z==1)
			m=9;
		else if(z==2||z==7)
			m=6;
		else
			m=5;
		printf("%d\n",m);
	}
	return 0;
}*/