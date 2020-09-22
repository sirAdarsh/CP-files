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

#define MAX 200005

vector<ll> adj[MAX];
ll downpath[MAX];

void addEdge(ll u, ll v){
	adj[u].pb(v);
	adj[v].pb(u);
}

void cal_downpath( ll src, ll par ){
	
	ll maxDownPath=0;
	
	bool leaf = 0;
	
	for(auto child : adj[src]){
		if(child!=par){
			cal_downpath(child,src);
			maxDownPath = max( maxDownPath, downpath[child] );
		}
	}
	if(leaf){
		downpath[src]=0;
	}
	else{
		downpath[src]=1+maxDownPath;
	}
	
}

ll dp[MAX][2];

void dfs(ll src, ll par){
	
	dp[src][0]=dp[src][1]=0;
	
	bool leaf=true;
	
	for(auto child : adj[src]){
		if(child!=par){
			leaf=false;
			dfs(child,src);	
		}
	}
	
	if(leaf)	return;
	
	// dp[src][0]
	
	for(auto child : adj[src]){
		dp[src][0] = max( dp[src][0], max(dp[child][0],dp[child][1]) );
	}
	
	// dp[src][1]
	vector<ll> downs;
	for(auto child : adj[src]){
		if(child!=par)
		downs.pb(downpath[child]);
	}
	sort(downs.begin(),downs.end(),greater<>());
	
	if(downs.size()==1){
		dp[src][1] += downs[0];
	}
	else{
		dp[src][1] += (downs[0]+downs[1]);
	}
	
}

ll n;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> n;
    for(ll i=1; i<n; i++){
    	ll a,b;
    	cin >> a >> b;
    	addEdge(a,b);
	}
	cal_downpath(1,0);
	dfs(1,0);
	
	cout << max(dp[1][0],dp[1][1]);
    
}

