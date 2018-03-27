/*#include<stdio.h>
int main(){
	int t,n,i,j;
	long long a[100000];
	bool hasFirst=false;
	bool can = true;
	int p=0;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		for(i=0;i<n;i++){
			p=0;
			for(j=0;j<n;j++){
				if((a[i]*a[j])%4==0)
					p++;
			}
			if(p==0||(p==1&&hasFirst==true)){
				can = false;
				break;
			}
			else if(p==1&&hasFirst==false){
				hasFirst=true;
			}
		}
		if(can==false)
			printf("No\n");
		else
			printf("Yes\n");

	}
	return 0;
}*/

