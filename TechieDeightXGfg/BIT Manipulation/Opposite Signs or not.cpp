#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int x=n^m;
	
	//if first bit of x is 1, this means both n and m
	//were of different sign.
	
	if(x<0){
		cout<<"Different Sign ";
	}
	else{
		cout<<"Same Signs ";
	}
}
