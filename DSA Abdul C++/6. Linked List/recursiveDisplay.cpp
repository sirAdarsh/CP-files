#include<iostream>
#include<cstdlib>
using namespace std;

struct Node{
	int data;
	struct Node* next;
};
Node* first;

void create(int A[],int n){
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

void recDisplay(struct Node* p){
	if(p==NULL){
		return;
	}
	

	recDisplay(p->next);
		cout<<p->data<<" ";
}
int main(){
	int A[]={3,5,1,3,6,8,3};
	create(A,7);
	recDisplay(first);
}

