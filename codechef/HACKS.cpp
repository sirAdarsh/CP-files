#include<bits/stdc++.h>
#define l long
using namespace std;

l gcd(l a,l b){
	return a?(gcd(b%a,a)):b;
}
l fib(l nth){
	if(nth==0){
		return 0;
	}
	l first=1;
	l second=1;
	for(int i=3;i<=nth;i++){
		l temp=second;
		second=first+second;
		first=temp;
	}
	return second;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		l n1,n2;
		cin>>n1>>n2;
		l a=fib(n1);
		l b=fib(n2);
//		cout<<a<<" "<<b;
		l g=gcd(a,b);
//		cout<<g;
		
		cout<<g<<endl;
	}
}

