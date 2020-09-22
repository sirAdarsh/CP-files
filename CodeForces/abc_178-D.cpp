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

int t;

ll S;

ll dp[2001];

ll solve(ll prev_sum){
	
	
	if(prev_sum==S){
		return 1;
	}
	if(prev_sum>S){
		return 0;
	}
	if(dp[prev_sum]!=-1){
		return dp[prev_sum];
	}
	ll ans=0;
	
	for(int i=3; i<=S; i++){
		ans += (solve(prev_sum+i)+MOD)%MOD;
	}
	
	return dp[prev_sum]=(ans+MOD)%MOD;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> S;
    memset(dp,-1,sizeof(dp));
    cout << solve(0);
}

