#include<iostream>
#define ll long long
using namespace std;
int main(){
	ll n;
	cin >> n;
	
	// find maximum number div by 2 just less than or equal to n
	
	ll p = n/2;
	
	ll c;
	c = 2 * p;
	ll diff = n-c;
	while( true ){
		
		c/=2;
		
		if( c % 2 ){
			break;
		}
		
		
	}
	cout<<(c+diff)<<endl;
	
}
