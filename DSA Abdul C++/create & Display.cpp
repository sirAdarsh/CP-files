#include<cstdlib>
#include<cstdio>

struct Node{
	int data;
	Node *next;
};
struct Node *first;

void create(int A[],int n){

	struct Node *t,*last;
	first=(struct Node*)malloc(sizeof(struct Node));
	first->data=A[0];
	first->next=NULL;
	last=first;
	
	for(int i=1;i<n;i++){
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void display(struct Node *p){
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}
}
int main(){
	struct Node *temp;
	int A[]={3,1,3,1,6,7};
	create(A,6);
	display(first);
}


