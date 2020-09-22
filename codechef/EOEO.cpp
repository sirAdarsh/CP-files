/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll find(int n){
	
	if(n&1){
		return 0;
	}
	ll c = 0;
	while( n!=0 ){
		n = n >> 1;
		c++;
		if( n&1 ){
			return c;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
 	
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll shifts = find(n);
		cout << shifts<<endl;
		ll evs = n/2;
		
		ll ans;
		
		ll tm = pow(2,shifts+1);
		
		ans = n/tm;
		cout <<ans <<endl;
		
	}   
}

