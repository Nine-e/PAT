//【C系列4.17】问题四：递归函数
/*#include<stdio.h>
#include<math.h>
void happy(int row);
int main() {
    happy(9);
    return 0;
}
void happy(int row){
	if(row>=1){
		happy(row-1);
	}
	else
		return ;
	int i;
	for(i=1;i<row;i++){
		printf("%d*%d=%d ",i,row,i*row);
	}
	printf("%d*%d=%d\n",row,row,row*row);
}*/