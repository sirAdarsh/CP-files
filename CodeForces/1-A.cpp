#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	
	double n,m,a;
	cin >> n >> m >> a;
	
	ll c,b;
	
	c = ceil( n / a );
	b = ceil( m / a );
	
	cout<<c*b<<endl; 
	
}
