#include<iostream>
using namespace std;

string isPrime(int a){
	
	if(a==1){
		return "no";
	}
	for(int i=2;i*i<=a;i++){
		
		if(a%i==0){
			
			return "no";
		}
		
	}
	return "yes";
	
}

int main(){
	int t;
	cin >> t;
	
	
	while(t--){
		
		int a;
		cin >> a;
		cout<< isPrime(a) <<endl;
		
	}
}
