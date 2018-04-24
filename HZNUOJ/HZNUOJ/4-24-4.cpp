//【C系列6.18】字符串训练之吉祥物重写检讨书 
/*#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		char c;
	    int x,y;
		scanf("%d %d",&n,&m);
		getchar();
		int i,j;
		char a[10][100];
		for(i=0;i<n;i++){
			gets(a[i]);
		}
		while(m--){
			
			scanf(" %c %d %d",&c,&x,&y);
			if(c=='A')
				strcat(a[x-1],a[y-1]);
			else if(c=='C')
				strcpy(a[x-1],a[y-1]);
		}
		printf("%s\n",a[0]);
	}
	return 0;
}*/