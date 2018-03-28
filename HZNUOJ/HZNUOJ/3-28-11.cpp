//【C系列3.11】中文简单digit root 
/*#include<stdio.h>
int main(void){
	int n;
	while(scanf("%d",&n)!=EOF){
		while(n>=10){
			n=n/100000+n%10000/10000+n%10000/1000
				+n%1000/100
				+n%100/10
				+n%10;
		}
		printf("%d\n",n);
	}
	return 0;
}*/
/*九余数定理

一个数对九取余后的结果称为九余数。

一个数的各位数字之和相加后得到的<10的数字称为这个数的九余数（如果相加结果大于9，则继续各位相加）

这个还是挺好理解的，前提是要理解模运算的规则，在这里简单敲一下

(a+b)%p = (a%p+b%p)%p;

(a-b)%p = (a%p-b%p)%p;

(a*b)%p = (a%p*b%p)%p;

(a^b)%p = ((a%p)^b)%p;

随便举一个例子，本来1000%9=(1%9*1000%9)%9,这里我每次只写括号里面的，外面统一加一个%9，运算结果不变

1234%9=(1%9*1000%9+2%9*100%9+3%9*10%9+4%9)%9=(1+2+3+4)%9;

出现这种状况的原因的是10的倍数对9取余为1，例如1000=9*111+1 , 100=9*11+1 , 10=9*1+1；

简单的说就是：一个整数模9的结果与这个整数的各位数字之和模9的结果相同*/
/*#include<stdio.h>
int main(void){
	int n;
	while(scanf("%d",&n)!=EOF){
		printf("%d\n",(n-1)%9+1);
	}
	return 0;
}*/