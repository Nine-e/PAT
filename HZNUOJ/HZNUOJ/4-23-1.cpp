//【C系列6.8】指针训练之作业变形
/*#include<stdio.h>
double odd (int n){
	int i;
	double sum=0;
	for(i=1;i<=n;i+=2){
		sum+=1.0/i;
	}
	return sum;
}
double even (int n){
	int i;
	double sum=0;
	for(i=2;i<=n;i+=2){
		sum+=1.0/i;
	}
	return sum;
}
int main(){
	int n;
	scanf("%d",&n);
	double (*func)(int);
	if(n%2==0)
		func=even;
	else
		func=odd;
	printf("%.2lf\n",(*func)(n));
	return 0;
}*/