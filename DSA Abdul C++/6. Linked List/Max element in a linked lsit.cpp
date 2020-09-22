// Maximum element in a linked list
#include<cstdio>
#include<cstdlib>

//Node
struct Node{
	int data;
	Node *next;
};
Node *first=NULL;

void create(int arr[],int n){
	
	Node *t,*last;

	first = (Node *)malloc(sizeof(Node));
	first -> data = arr[0];
	last = first;
	first -> next = NULL;
	
	for(int i=1;i<n;i++){
		t = (Node *)malloc(sizeof(Node));
		t-> data = arr[i];
		t-> next = NULL;
		last -> next = t;
		last = t;
	}
}

// display
void displayList(Node *p){
	while( p!=NULL ){
		
		printf("%d ",p->data);
		p=p->next;
		
	}
}

int max(Node *p){
	
	int maxm = p->data;
	
	while(p!=NULL){
		
		if( p->data > maxm ){
			maxm = p->data;
		}
		p = p->next;
		
	}
	return maxm;
}

//recursive method for finding max

int recMax(Node *p){
	int x=0;
	if( p ==NULL ){
		return INT_MIN;
	}else{
		
		x = max(p->next);
		if(x>p->data){
			return x;
		}else{
			return p->data;
		}
		
	}
	
}


//method for linear search in a linked list
int isPresent(Node *p, int key){
	
	while( p!= NULL ){
		
		if( p->data == key ){
			return 1;
		}
		p = p->next;
	}
	return 0;
}

//recursive method for linear search
int RecIsPresent(Node *p,int key){
		if(p==NULL){
		return 0;
	}
	if(key == p->data){
		return 1;
	}
else{
		return RecIsPresent(p->next,key);
	}
	
	
}



int main(){
	
	int arr[] = {5,2,4,2,33,11,1,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	create(arr,n);
	displayList(first);
	printf("\nMaximum = %d",max(first));
	
	printf("\n\nThe element 11 is %d",isPresent(first,12));
	
	printf("\n\nThe element 1 is %d",RecIsPresent(first,12));
}

