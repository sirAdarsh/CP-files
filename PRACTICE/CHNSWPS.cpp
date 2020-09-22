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
    
    int t;
    cin >> t;
    while(t--){
    	ll n;
    	cin >> n;
    	unordered_map<ll,ll> ma, mb, m;
    	ll a[n],b[n];
    	
    	for(int i=0; i<n; i++){
    		cin >> a[i];
    		m[a[i]]++;
    		ma[a[i]]++;
		}
    	
    	for(int i=0; i<n; i++){
    		cin >> b[i];
    		m[b[i]]++;
    		mb[b[i]]++;
		}
		
		vector<ll> av,bv;
		
		bool e =false;
		
		for(auto i : m){
			
//			if( m[i.first]%2 ){
//				e=true;
//				cout << -1 << endl;
//				break;
//			}	
			
			ll freq = m[i.first]/2;
			
			ll diff;
			
			diff = ma[i.first] - freq;
			
			if(diff > 0) av.push_back(diff);
			
			
			diff = mb[i.first] - freq;
			
			if(diff > 0) bv.push_back(diff);
			
		}
		
		
		if(!e){
			
			if(av.size()!=bv.size()){
				cout << -1 << endl;
			}
			else{
				
				ll ans=0;
				
				sort(av.begin(),av.end());
				sort(bv.begin(),bv.end());
				
				ll sz= av.size();
				
				for(int i=0; i<sz/2; i++){
					ans += av[i];
					ans += bv[i];
				}
				if(sz%2) ans+= min(av[sz/2],bv[sz/2]);
				cout << ans << endl;
			}
			
		}
		
	}
    
}

