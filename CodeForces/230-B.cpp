#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool checkPrime(int n){
	
	int i=2;
	while(i * i <= n){
		
		if(n%i==0){
			return false;
		}
		i++;
	}
	return true;
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		double n;
		cin>>n;
		n = sqrt(n);
		if((int)n == n){
			
			if(n==1){
				cout<<"NO"<<endl;
				continue;
			}
			if(checkPrime(n)){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	
}
