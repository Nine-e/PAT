//【C系列7.5】结构-5 叫姐姐
/*#include<stdio.h>
void f(double a,double b){
	if(a==0&&b==0)
		printf("0.0\n");
	else if(a==0&&b!=0)
		printf("%.1lfi\n",b);
	else if(a!=0&&b==0)
		printf("%.1lf\n",a);
	else
		printf("%.1lf%+.1lfi\n",a,b);
}
int main(){
	double a,b,c,d;
	while(scanf("%lf %lf %lf %lf",&a,&b,&c,&d)!=EOF){
		printf("(%.1lf%+.1lfi) + (%.1lf%+.1lfi) = ",a,b,c,d);
		f(a+c,b+d);
		printf("(%.1lf%+.1lfi) - (%.1lf%+.1lfi) = ",a,b,c,d);
		f(a-c,b-d);
		printf("(%.1lf%+.1lfi) * (%.1lf%+.1lfi) = ",a,b,c,d);
		f(a*c-b*d,b*c+a*d);
		printf("(%.1lf%+.1lfi) / (%.1lf%+.1lfi) = ",a,b,c,d);
		f((a*c+b*d)/(c*c+d*d),(b*c-a*d)/(c*c+d*d));
	}
	return 0;
}*/
