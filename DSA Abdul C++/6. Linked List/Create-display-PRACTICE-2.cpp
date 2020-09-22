// Display a linked list

#include<cstdio>
#include<cstdlib>

struct Node{
	int data;
	struct Node *next;
};
Node *first=NULL;


void create(int A[],int n){
	
	struct Node *t,*last;
	first = (struct Node*)malloc(sizeof(struct Node));
	first -> data = A[0];
	first -> next = NULL;
	last = first;
	
	
	for(int i=1;i<n;i++){
		
		t = (struct Node*)malloc(sizeof(struct Node));
		t -> data = A[i];
		t -> next = NULL;
		last -> next = t;
		last = t;
	}
	
}

void display(struct Node *p){
	
	while ( p!=NULL ){
		
		printf("%d ",p->data);
		p = p->next;
	}
}

void RecDisplay(struct Node *p){
	
	if( p != NULL ){
		printf("%d ",p->data);
		RecDisplay( p->next );
	}
	
}
int main(){
	
	struct Node *temp;
	int A[] = {3,5,7,1,0,2,3,4};
	int n = sizeof(A)/sizeof(A[0]);
	create(A,n);
	RecDisplay(first);
	
	
	
}

