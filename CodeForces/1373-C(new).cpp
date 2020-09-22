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
    unordered_map<ll,ll> pos;  // 1 INDEXED
    while(t--){
    	string s;
    	cin >> s;
    	ll sz = s.size();
    	
    	pos.clear();
    	
    	int minn=INT_MAX;
    	
    	ll in=0;
    	
    	for(ll i=0; i<sz; i++){
    		
    		if(s[i]=='+'){
    			in++;
			}
			else{
				in--;
			}
			if(in<minn){
				minn=in;
			}
			if(pos[in]==0){
				pos[in]=i+1;
			}
    		
		}
		
		
		
		ll x;
		x = -1*(minn);
		
//		cout <<"x = "<<x<<endl;
    	
    	ll count = 0;
    	count += sz;
    	
    	for(ll i=0; i<=x; i++){
    		
    		ll posn = pos[-1*(i+1)];
//    		cout <<"i = "<< i << "posn = "<<posn<<endl;
    		count += posn;
		}
    	cout << count << endl;
    	
	}
    
}

