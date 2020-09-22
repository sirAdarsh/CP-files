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
int t;
ll n,m;

ll dp[25][(1LL<<20)];

ll solve(ll u, ll mask, vector<int> adj[]){
	
	if(__builtin_popcount(mask)==n){
		return 1;
	}
	if(u==n-1){
		return 0;
	}
	if(dp[u][mask]!=-1){
		return (dp[u][mask]+MOD)%MOD;
	}
	ll res=0;
	for(auto v : adj[u]){
		if(mask & (1LL<<v)){
			continue;
		}
		res += (solve(v, mask | (1LL<<v), adj)+MOD)%MOD;
	}
	return dp[u][mask]=(res+MOD)%MOD;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> n >> m;
    vector<int> adj[n+1];
    memset(dp,-1,sizeof(dp));
    while(m--){
    	int a,b;
    	cin >> a >> b;
    	a--;
    	b--;
    	adj[a].pb(b);
	}
    cout << solve(0,(1<<0),adj);
}

