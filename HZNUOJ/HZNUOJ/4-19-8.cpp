//【C系列5.8】指针专题之说明指针数组 
/*#include<stdio.h>
void fun0(int a){
	printf("这是1号函数的打印输出。\n");
}
void fun1(int a){
	printf("这是2号函数的打印输出。\n");
}
void fun2(int a){
	printf("这是3号函数的打印输出。\n");
}
int main(){
	int a;
	void(*ptr[3])(int)={fun0,fun1,fun2};
	while(scanf("%d",&a)!=EOF){
		ptr[a-1](a);
	}
	return 0;
}*/