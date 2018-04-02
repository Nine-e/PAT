//【C系列3.20】单总说：一个简单题2 
/*#include<stdio.h>
void main(){
	int y,m,d;
	scanf("%d %d %d",&y,&m,&d);
	if(m==12&&d==31){
		y=y+1;
		m=1;
		d=1;
	}
	else if((m==1||m==3||m==5||m==7||m==8||m==10)&&(d==31)){
		m=m+1;
		d=1;
	}
	else if((m==4||m==6||m==9||m==11)&&(d==30)){
		m=m+1;
		d=1;
	}
	else if((y%4==0&&y%100!=0)||(y%400==0)){
		if(m==2&&d==28){
			d=29;
		}
		else if(m==2&&d==29){
			m=3;
			d=1;
		}
		else {
			d++;
		}
	}
	else if(m==2&&d==28){
		m=3;
		d=1;
	}
	else{
		d=d+1;
	}
	printf("%d %d %d",y,m,d);
}*/
/*#include<stdio.h>
void main(){
	int y,m,d;
	scanf("%d %d %d",&y,&m,&d);
	int a[13]={1,31,28,31,30,31,30,31,31,30,31,30,31};
	if((y%4==0&&y%100!=0)||(y%400==0)){
		a[2]=29;
	}
	if(++d>a[m]){
		m++;
		d=1;
	}
	if(m>12){
		y++;
		m=1;
	}
	printf("%d %d %d",y,m,d);
}*/