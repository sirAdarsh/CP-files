#include<bits/stdc++.h>
using namespace std;

void showstack(stack<int> s){
	while(!s.empty()){
		cout<<"\t"<<s.top();
		s.pop();
	}
	cout<<"\n";
}

int main(){
	
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(5);
	s.push(2);
	cout<<"the stack is : ";
	showstack(s);
	
}
