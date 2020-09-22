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
vector<ll> adj[200009];

ll dfsUtil(ll u, vector<bool> &visited){
	
	visited[u]=true;
	
	ll ans2=1;
	
	ll adds=0;
	
	for(auto child:adj[u]){
		if(!visited[child]){
			adds += dfsUtil(child,visited);
		}
	}
	return ans2+adds;
}

ll dfs(ll V){
	vector<bool> visited(V,false);
	ll ans=0;
	for(int i=1; i<=V; i++){
		if(!visited[i]){
			ll els = dfsUtil(i,visited);
			ans = max(ans, els);
		}
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n,m;
    cin >> n >> m;
    for(ll i=0; i<m; i++){
    	ll a,b;
    	cin >> a >> b;
    	adj[a].pb(b);
    	adj[b].pb(a);
	}
	cout << dfs(n);
}

