#include<cstdio>
#include<cstdlib>

struct Node{
	int data;
	struct Node *next;
};
Node *first;
//void create(int A[],int n){
//
//	struct Node *t,*last;
//	first=(struct Node*)malloc(sizeof(struct Node));
//	first->data=A[0];
//	first->next=NULL;
//	last=first;
//	
//	for(int i=1;i<n;i++){
//		t=(struct Node*)malloc(sizeof(struct Node));
//		t->data=A[i];
//		t->next=NULL;
//		last->next=t;
//		last=t;
//	}
//}
void create(int A[],int n){
	
	first=(struct Node*)malloc(sizeof(struct Node));
	first->data=A[0];
	first->next=NULL;
	Node* last;
	last=first;
	
	for(int i=1;i<n;i++){
		
		Node *t;
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=NULL;
		last->next=t;;
		last=t;
	}
}
void display(struct Node *p){
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}
}
//
//void display(struct Node* p){
//	while(p!=NULL){
//		printf("%d ",p->data);
//		p=p->next;
//	}
//}
int main(){
	int A[]={3,1,3,4,5};
	create(A,5);
	display(first);
}








