#include<bits/stdc++.h>
using namespace std;

void ifPrime(int n){
	if(n<=1){
		cout<<"Not Pime";
		return;
	}
	if(n==2){
		cout<<"Prime";
		return;
	}
	if(n%2==0){
		cout<<"Not Prime";
		return;
	}
	
	int i=3;
	while(i<=sqrt(n)){
		if(n%i==0){
			cout<<"Not Prime";
			return;
		}
		i+=2;
	}
	cout<<"Prime";
}

int main(){
	int n;
	cin>>n;
	ifPrime(n);
}
