//program to code get() and set() in an array
#include<iostream>
using namespace std;

struct Array{
	int A[10];
	int size;
	int length;
};

int get(struct Array arr,int index){
	if(index>=0 && index<arr.length){
		return arr.A[index];
	}
}

void set(struct Array *arr int num,int index){
	
	if(index>=0 && index<arr->length){
		arr->A[index]=num;
	}
	
}



int main(){
	
}
