//【C系列7.4】结构-4 善于总结 
/*#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[100][9];
	int i,j,k=0;
	for(i=0;i<n;i++){
		for(j=0;j<9;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<n;i++){
		for(j=1;j<9;j++){
			if(a[i][j]>a[k][j]){
				k=i;
				break;
			}
			else if(a[i][j]<a[k][j]){
				break;
			}
		}
	}
	printf("%d\n",a[k][0]);
	return 0;
}*/