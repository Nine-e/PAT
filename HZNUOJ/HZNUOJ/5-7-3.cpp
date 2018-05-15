//【C系列7.3】结构-3 补充信息
/*#include<stdio.h>
#include<stdlib.h>
struct node * createList(int n);
void printList( struct node * head);
struct node {
	int num;
	struct node *next;
};
int main(){
	int n,t;
	scanf("%d %d",&n,&t);
	struct node * head = NULL;
	head = createList(n);
	while(t--){
		int x,y;
		struct node * t;
		int size = sizeof(struct node);
		scanf("%d %d",&x,&y);

		t=head;
		if(head->num!=y){
			while(t->next!=NULL){
			if(t->next->num==y){
				struct node * temp;
				temp=(struct node*)malloc(size);
				temp->num=x;
				temp->next=t->next;
				t->next=temp;
				break;
			}
			else{
				t=t->next;
			}
			}
		}
		else if(head->num==y){
			struct node * temp;
			temp=(struct node*)malloc(size);
			temp->num=x;
			temp->next=head;
			head = temp;
		}

	}
	printList(head);
	return 0;
}
struct node * createList(int n){
	struct node * head=NULL,* tail,* t;
	int number;
	int size = sizeof(struct node);
	while(n--){
		t=(struct node*)malloc(size);
		scanf("%d",&number);
		t->num=number;
		t->next=NULL;
		if(head==NULL)
			head = t;
		else
			tail->next=t;
		tail = t;
	}
	return head;
}
void printList(struct node * head){
	struct node * p = NULL;
	for(p = head; p!=NULL;p=p->next)
		printf("%d ",p->num);
	printf("\n");
}*/