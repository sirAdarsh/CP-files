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
#define MAX 400001
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

vector<ll> adj[MAX];
ll downpath[MAX];

void pre(ll src, ll par){
	
	ll maxDown=0;
	
	bool leaf=0;
	
	for(auto child:adj[src]){
		if(child!=par){
			pre(child,src);
			maxDown = max(maxDown, downpath[child]);
		}
	}
	if(leaf){
		downpath[src]=0;
	}
	else{
		downpath[src]=1+maxDown;
	}
	
}

ll dp[MAX][2];

void dfs(ll src, ll par){
	
	dp[src][0]=dp[src][1]=0;
	
	bool leaf=true;
	
	for(auto child:adj[src]){
		if(child!=par){
			leaf=false;
			dfs(child,src);
		}
	}
	if(leaf) return;
	
	for(auto child:adj[src]){
		if(child!=par){
			dp[src][0]=max(dp[src][0],max(dp[child][0],dp[child][1]));
		}
	}
	
	vector<ll> downs;
	for(auto child:adj[src]){
		if(child!=par){
			downs.pb(downpath[child]);
		}
	}
	sort(downs.begin(),downs.end(),greater<>());
	
	if(downs.size()==1){
		dp[src][1]+=downs[0];
	}
	else{
		dp[src][1] += (downs[0]+downs[1]);
	}
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n,k;
    cin >> n >> k;
    for(int i=1; i<n; i++){
    	ll a,b;
    	cin >> a >> b;
    	adj[a].pb(b);adj[b].pb(a);
	}
	pre(1,0);
	dfs(1,0);
	if(1+max(dp[1][0],dp[1][1])>k){
		cout<<"Yes";
	}
	else{
		cout <<"No";
	}
}

