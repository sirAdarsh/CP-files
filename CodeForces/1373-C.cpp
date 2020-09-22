/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
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
    	string s;
    	cin >> s;
    	ll sz=s.size();
    	
    	unordered_map<ll,ll> pos;
    	
    	pos.clear();
    	
    	ll p=0;
    	ll last = 0;
    	
    	for(ll i=0; i<sz; i++){
    	
			if(s[i]=='-'){
				p--;
				last--;
			}
			else{
				p++;
				last++;
			}
			if(pos[p]==0){
				pos[p]=i+1;
			}
	
		}
		
		
		
		ll x;
		x = last;
		
		x = -1*x;
		
		ll count=0;
		count += sz;
		
		ll search;
		
		for(ll i =0; i<=x; i++){
			
			search= -(i+1);
			ll nums = pos[search];
			
			count += nums;
			
		}
		
		cout << count<<endl;
    	
	}
    
}

