#include<iostream>
using namespace std;

void swap(int &x,int &y){
	if(x!=y){
		x=x ^ y;
		y=x ^ y;
		x=x ^ y;
	}
}

int main(){
	int a,b;
	cin>>a>>b;
	swap(a,b);
	cout<<a<<" "<<b;
}
