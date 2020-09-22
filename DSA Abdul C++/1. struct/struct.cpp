#include<iostream>
using namespace std;

struct Rectangle{
	int length;
	int breadth;
};
int main(){
	//struct Rectangle r;  //declaration
	struct Rectangle r={10,5}; //declaration plus initialization
	
	r.length=15;
	r.breadth=10;
	
	cout<<r.length*r.breadth;
}
