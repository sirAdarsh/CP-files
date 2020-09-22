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
#define MAX 200006
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

vector<int> adj[MAX];
int n;

int dp[MAX][2];

void addEdge(int u, int v){
	adj[u].pb(v);
	adj[v].pb(u);
}

void dfs(int src, int par){
	
	dp[src][0]=dp[src][1]=0;
	
	bool leaf=true;
	
	for(auto child : adj[src]){
		if(child!=par){
			leaf=false;
			dfs(child,src);
		}
	}
	
	if(leaf){
		return;
	}
	
	for(auto child : src){
		if(child!=par){
			dp[src][0] += max(dp[child][0],dp[child][1]);
		}
	}
	
	for(auto child : src){
		if(child!=par){
			dp[src][1] = max( dp[src][1], 1+dp[child][0] +(dp[src][0]-max(dp[child][0],dp[child][1])) );
		}
	}
	
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> n;
    for(int i=1; i<n; i++){
    	int a,b;
    	cin >> a >> b;
    	addEdge(a,b);
	}
    dfs(1,0);
    cout << max(dp[1][0],dp[1][0]);
}

