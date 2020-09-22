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
#define MAX 100001
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
ll t;

vector<ll> adj[MAX];
ll cost[MAX];

ll dfsUtil(ll u, vector<bool> &visited){
	visited[u]=true;
	ll rec=cost[u];
	for(auto link:adj[u]){
		if(!visited[link]){
			rec=min(rec,dfsUtil(link,visited));
		}
	}
	return rec;
}

ll dfs(ll V){
	
	vector<bool> visited(V+1,false);
	
	ll ans = 0;
	
	for(int i=1; i<=V; i++){
		if(!visited[i]){
			ans += dfsUtil(i,visited);
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
    
    for(int i=0; i<n; i++){
    	cin >> cost[i+1];
	}
	
	while(m--){
		ll a,b;
		cin >> a >> b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	
	cout << dfs(n);
    
}

