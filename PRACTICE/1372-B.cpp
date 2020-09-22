/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

ll find(ll n){
	for(ll i=3; i*i<=n; i++){
		if(n%i==0){
			return n/i;
		}
	}
	return n-1;
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
    	
    	if(n%2==0){
    		cout << n/2 <<" "<<n/2<<endl;
		}
    	else{
    		
    		ll num = find(n);
    		cout << num<<" "<<n-num<<endl;
    		
		}
	}
}

