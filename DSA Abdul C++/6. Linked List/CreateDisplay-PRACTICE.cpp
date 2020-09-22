#include<iostream>
#include<cstdlib>
using namespace std;

struct Node{
	int data;
	struct Node* next;
};
Node *first;

int create(int A[],int n){
	first=(struct Node*)malloc(sizeof(struct Node));
	first->data=A[0];
	first->next=NULL;
	Node* last;
	last=first;
	Node *t;
	for(int i=1;i<n;i++){
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void display(struct Node* p){
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
}
int main(){
	int A[]={3,4,2,1,5,6};
	create(A,6);
	display(first);
}
