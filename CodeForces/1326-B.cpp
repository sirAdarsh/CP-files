#include<iostream>
#define ll long long
using namespace std;
int main(){
	ll n,b,x,a;
	cin>>n;
	ll B[n];
	for(ll i=1;i<=n;i++){
		cin>>B[i];
	}
	x=0;
	for(ll i=1;i<=n;i++){
		b=B[i];
		a=x+b;
		if(a>x){
			x=a;
		}
		cout<<a<<" ";
	}
}
