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
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
ll t;

ll ans= INT_MIN;

ll n;

ll dp[300001][2];

ll solve(ll idx, ll tight, ll ar[] ){
	
	if(idx==n-1){
		if(!tight){
			return ar[idx];
		}
		else{
			return 0;
		}
	}
	
	if(dp[idx][tight]!=-1){
		return dp[idx][tight];
	}
	
	if(tight){
		// select neg
		
		ll a=0,b=0;
		// select
		a += solve(idx+1, !tight, ar)-ar[idx];
		
		b += solve(idx+1, tight, ar);
		
		return dp[idx][tight]=max(a,b);
		
	}
	else{
		
		int a=0,b=0;
		
		a += solve(idx+1, !tight, ar)+ar[idx];
		
		b += solve(idx+1, tight, ar);
		
		return dp[idx][tight]=max(a,b);
		
	}
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	ll q;
    	cin >> n >> q;
    	ll ar[n];
    	memset(dp,-1,sizeof(dp));
    	for(ll i=0; i<n; i++){
    		cin >> ar[i];
		}
		cout << solve(0,0, ar) << endl;
	}
    
}

