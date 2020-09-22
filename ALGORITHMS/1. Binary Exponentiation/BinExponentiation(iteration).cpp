#include<iostream>
#define ll long long
using namespace std;

ll binPow(ll a,ll b){
	
	ll res=1;
	
	while(b>0){
		
		if(b&1){
			
			res=res*a;
			
		}
		
		a=a*a;
		
		b>>=1;
		
	}
	return res;
	
}

int main(){
	ll a,b;
	cin>>a>>b;
	cout<<binPow(a,b)<<endl;
}
