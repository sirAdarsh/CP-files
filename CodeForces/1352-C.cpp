#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		
		double k;
		ll n;
		cin >> n >> k;
		
		ll grp = ceil( k / (n-1) );
		cout<<grp<<endl;
		
		ll numUp =  n * grp;
		cout<<numUp<<endl;
		
		ll numDown = numUp - 1;
		cout<<numDown<<endl;
		
		ll check = grp * ( n-1 );
		cout<<check<<endl;
		
		cout<<check<<" "<<k<<endl;
		
		ll diff = check-k;
		cout<<diff<<endl;
		
		ll ans = numDown - diff;
		
		cout<<ans<<endl;
		
	}
}
