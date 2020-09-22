// counting number of nodes in linked list
#include<cstdio>
#include<cstdlib>

struct Node{
	int data;
	Node *next;
};
Node *first = NULL;

void create(int A[],int n){
	
	Node *t,*last;
	
	first = (Node *)malloc(sizeof(Node));
	first -> data = A[0];
	first -> next = NULL;
	last = first;
	
	for(int i=1;i<n;i++){
		
		t = (Node*)malloc(sizeof(Node));
		t -> data = A[i];
		t -> next = NULL;
		last -> next = t;
		last = t;

	}
	
}

void countNodes( Node *p ){
	
	int count = 0;
	while( p != NULL ){
		count++;
		p = p->next;
	}
	
	printf("number of nodes = %d \n",count);
}

int recCountNodes( Node *p ){
	
	if( p==NULL ){
		return 0;
	}
	else{
		return recCountNodes(p->next) + 1;
	}
	
}


// function for sum of all ellements in a linked list
void sumOfElements( Node *p ){
	
	int sum=0;
	
	while( p != NULL ){
		sum += (p->data);
		p = p->next;
	}
	
	printf("\nsum of all elements = %d",sum);
}

// recursive function fpr sum of all elements in a linked list
int recSumOfElements(Node *p){
	if(p==NULL){
		return 0;
	}else{
		return (recSumOfElements(p->next) + p->data);
	}
}



int main(){
	
	int A[] = {2,4,2,5,3,5,6,2,41};
	int n = sizeof(A)/sizeof(A[0]);
	create(A,n);
	countNodes(first);
	printf("number of nodes = %d",recCountNodes(first));
	
	sumOfElements(first);
	
	printf("\nsum of elements = %d",recSumOfElements(first));
	
	
}

