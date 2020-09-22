#include<iostream>
using namespace std;

//this shows ERROR because p is a void pointer, and so it can't be derefrenced.
int main(){
	int a=10;
	void* p=&a;
	cout<<*p;
}
//
//this works as pointer p is typecasted into integer pointer and so it can derefrenced.
int main(){
	int a=10;
	void* p=&a;
	cout<<*((int *)p);
}

//this tuns because here we store the pointer in an integer pointer and therefore it also can be derefrenced
int main(){
	int a=10;
	int* p=&a;
	cout<<*p;
}

//for a char value we should take a character pointer.
int main(){
	char a='d';
	char* p=&a;
	cout<<*p;
}
