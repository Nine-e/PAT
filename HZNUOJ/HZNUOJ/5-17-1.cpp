//【C系列7.6】结构-6 无题
/*#include<stdio.h>
#include<stdlib.h>
struct student{
	char name[9];
	double g1;
	double g2;
	double g3;
	double avg;
	struct student *p;
};
int main(){
	int n;
	scanf("%d",&n);
	struct student *head=NULL,*t,*tail;
	int i,size;
	size = sizeof(struct student);
	for(i=0;i<n;i++){
		t=(struct student *)malloc(size);
		scanf("%s %lf %lf %lf",&t->name,&t->g1,&t->g2,&t->g3);
		t->avg=(t->g1+t->g2+t->g3)/3;
		t->p=NULL;
		if(head==NULL)
			head=t;
		else
			tail->p=t;
		tail=t;
	}
	

	struct student *temp;
	temp = head;
	struct student a[1000];
	for(i=0;i<n;i++){
		a[i]=*temp;
		temp=temp->p;
	}

	double max=0;
	int maxi;
	for(i=0;i<n;i++){
		if(a[i].g1>max){
			max=a[i].g1;
			maxi=i;
		}
	}
	printf("%s %.2lf %.2lf %.2lf\n",a[maxi].name,a[maxi].g1,a[maxi].g2,a[maxi].g3);
	for(i=0;i<n;i++){
		if(a[i].g2>max){
			max=a[i].g2;
			maxi=i;
		}
	}
	printf("%s %.2lf %.2lf %.2lf\n",a[maxi].name,a[maxi].g1,a[maxi].g2,a[maxi].g3);
	for(i=0;i<n;i++){
		if(a[i].g3>max){
			max=a[i].g3;
			maxi=i;
		}
	}
	printf("%s %.2lf %.2lf %.2lf\n",a[maxi].name,a[maxi].g1,a[maxi].g2,a[maxi].g3);
	printf("\n");

	int j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
		if(a[i].avg<a[j].avg){
			struct student x;
			x=a[i];
			a[i]=a[j];
			a[j]=x;
		}
		}
	}
	for(i=0;i<n;i++){
		printf("%s %.2lf %.2lf %.2lf\n",a[i].name,a[i].g1,a[i].g2,a[i].g3);
	}
	printf("\n");

	
	for(i=0;i<n;i++){
		if(a[i].avg>80)
			printf("%s %.2lf %.2lf %.2lf %.2lf\n",a[i].name,a[i].g1,a[i].g2,a[i].g3,a[i].avg);
	}

	return 0;
}*/