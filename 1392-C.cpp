/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
ll t;

int solve(){
	
	ll n;
	cin >> n;
	vector<ll> arr(n);
	for(ll i=0; i<n; i++){
		cin >> arr[n-1-i];
	}
	ll dp[n+1];
	dp[0]=0;
	
	for(ll i=1; i<n; i++){
		
		if(arr[i]<arr[i-1]){
			dp[i]=dp[i-1];
		}		
		else{
			ll diff = arr[i]-arr[i-1];
			dp[i]=dp[i-1]+diff;
		}
		
	}
	return dp[n-1];
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	
    	cout << solve() <<endl;;
    	
	}
    
}

