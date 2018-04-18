//【C系列4.15】问题二：单参数函数
/*#include<stdio.h>
#include<math.h>

double happy(double a);
double a;

int main() {
    while (scanf("%lf", &a) != EOF) {
        printf("%.6lf ", happy(a));
    }
    return 0;
}

double happy(double a){
	if(a!=0){
		double x=a;
		while(fabs(x-(x+a/x)/2)>=1e-7){
			x=(x+a/x)/2;
		}
		return x;
	}
	else 
		return 0;
}*/