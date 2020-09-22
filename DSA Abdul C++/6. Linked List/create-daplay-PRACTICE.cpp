#include<cstdlib>
#include<cstdio>
#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node* next;
};
struct Node* first;

int create(int A[],int n){
	
	struct Node* last;
	first=(struct Node*)malloc(sizeof(struct Node));
	first->data=A[0];
	first->next=NULL;
	last=first;
	Node* t;
	for(int i=1;i<n;i++){
		t=(struct Node*) malloc(sizeof(struct Node));
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
	int A[]={3,1,4,2,6,4,6};
	create(A,7);
	display(first);
}
