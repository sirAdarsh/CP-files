//Binomial coeffecient without optimization
#include<iostream>
using namespace std;
#define ll long long

ll binCoeff(ll n, ll k){
	
	if(k==n || k==0){
		return 1;
	}
	return binCoeff(n-1,k-1)+binCoeff(n-1,k);
}

int main(){
	
	ll n,k;
	cin >> n >> k;
	cout<<binCoeff(n,k);
	
}


