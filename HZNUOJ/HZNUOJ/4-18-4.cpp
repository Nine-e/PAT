//【C系列4.16】问题三：多参数函数 
/*#include<stdio.h>

#include<math.h>

int happy(int year, int month, int day);

int main() {

        char ch;

        int year, month, day;

while (scanf("%d%c%d%c%d", &year, &ch, &month, &ch, &day) != EOF) {

printf("%d ", happy(year, month, day));

}

return 0;

}
int happy(int year, int month, int day){
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(year%400==0||(year%4==0&&year%100!=0))
		a[2]=29;
	if(month<1||month>12)
		return -1;
	if(day<1||day>a[month])
		return -2;
	return 1;
}*/