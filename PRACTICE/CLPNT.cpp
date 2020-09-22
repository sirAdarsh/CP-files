/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    ll t;
    cin >> t;
    while(t--){
    	ll n;
    	cin >> n;
    	vector<ll> arr(n);
    	for(int i=0; i<n; i++){
    		ll p;
    		cin >>p;
    		arr[i]=p;
		}
    	
    	ll q;
    	cin >> q;
    	ll quer[q];
    	ll x,y;
    	ll c;
    	for(int i=0; i<q; i++){
    		cin >> x >> y;
    		
    		c= (x+y);
    		
    		auto it = arr.begin();
    		
    		it = lower_bound(arr.begin(),arr.end(),c);
    		
			if(it==arr.end()){
				cout << n << endl;
			}
			else if(*it==c){
    			cout<<-1<<endl;
			}
			else{
				cout << it-arr.begin()<<endl;
			}
		}
    	
	}
    
}

