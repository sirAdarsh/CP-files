//Checking if the given positive number is a power of 2
#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	if(n & n-1){
		cout<<"Not a power of 2";
	}
	else{
		cout<<"Power of 2";
	}
}
