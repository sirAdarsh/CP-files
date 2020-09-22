#include<iostream>
using namespace std;

int prevFib(int n){
	if(n==0){
		return 0;
	}
	int first=0,second=1;
	
	while(second!=n){
		int t=second;
		second=first+second;
		first=t;
	}
	return first;
}

int main(){
	int n;
	cin>>n;
	int b,c;
	
	b=prevFib(n);
	c=n-b;
	cout<<0<<" "<<b<<" "<<c<<endl;
	
}
