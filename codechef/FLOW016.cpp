#include<iostream>
#define ll long long
using namespace std;

ll gcd(ll a,ll b){
	return b ? (gcd(b,a%b)) : a;
}
ll lcm(ll a,ll b){
	return (a*b)/gcd(a,b);
}
int main(){
	int t;
	cin>>t;
	ll a,b;
	while(t--){
		cin>>a>>b;
		cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;
	}
}

