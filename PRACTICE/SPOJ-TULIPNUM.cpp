/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin>>t;
    for(int T=1; T<=t; T++){
    	ll n,q;
    	cin >> n >> q;
    	ll arr[n];
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
		}
		
		ll dp[n+1];
		dp[0]=0;
		
		unordered_map<ll,ll> mp;
		
		for(int i=0; i<n; i++){
			if(mp[arr[i]]==0){
				dp[i+1] = dp[i]+1;
			}
			else{
				dp[i+1] = dp[i];
			}
			mp[arr[i]]++;
		}
		
		cout << "Case "<<T<<":"<<endl;
		
		while(q--){
			ll a,b;
			cin >> a >> b;
			cout << dp[b]-dp[a-1] << endl;
		}
		
	}
    
}

