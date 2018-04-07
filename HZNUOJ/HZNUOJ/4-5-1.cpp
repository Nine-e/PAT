//【C系列4.11】函数训练之爬楼梯 
/*#include<stdio.h>
int stair (int h);
void main(){
	int t,h;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&h);
		printf("%d\n",stair(h));
	}
}
int stair(int h){
	if(h==1)
		return 1;
	else if(h==2)
		return 2;
	else if(h==3)
		return 4;
	else 
		return stair(h-1)+stair(h-2)+stair(h-3);

}*/