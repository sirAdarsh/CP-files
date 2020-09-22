/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define pb push_back
#define pf push_front
#define PI 3.1415926535897932384
#define MOD 998244353
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    ll n,k;
    cin >> n >> k;
    
    vector<pair<ll,ll>> vec(k);
    
    for(ll i=0; i<k; i++){
    	ll a,b;
    	cin >> a >> b;
    	vec[i]=make_pair(a,b);
	}
	
	sort(vec.begin(),vec.end());
	
	vector<ll> dp(n+1,0);
	
	dp[1]=1;
	
	
	for(ll i=2; i<=n; i++){
		
		for(ll j=0; j<k; j++){
			
			bool e =false;
			
			for(ll l=vec[j].first; l<=vec[j].second; l++){
				
				if( i-l<=0 ){
					e = true;
					break;
				}
				
				(dp[i] += dp[i-l])%=MOD;
				
			}
			
			if(e){
				break;
			}
			
		}
		
	}
    
    cout << dp[n];
	
}

