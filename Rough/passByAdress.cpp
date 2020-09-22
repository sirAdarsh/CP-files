#include<iostream>
using namespace std;

int add(int *x){
	*x+=10;
	return 1;
}
int main(){
	int x;
	cin>>x;
	cout<<add(&x)<<endl;;
	cout<<x;
}
