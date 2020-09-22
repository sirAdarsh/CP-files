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
int n;

vector<int> adj[MAX];

void addEdge(int u, int v){
	adj[u].pb(v);
	adj[v].pb(u);
}

int col[MAX];
int dp[MAX];

void dfs(int src, int par){
	
	dp[src]=col[src];
	
	for(auto child : adj[src]){
		if(child!=par){
			dfs(child,src);
			dp[src]+=dp[child];
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
    	int a,b,t;
    	cin >> a >> b >> t;
    	addEdge(a,b);
    	if(t==2){
    		col[a]=col[b]=1;
		}
    	
	}
	dfs(1,0);
    vector<int> ans;
    for(int i=1; i<=n; i++){
    	if(dp[i]==1 ){
    		ans.pb(i);
		}
	}
    cout << ans.size()<<endl;
    for(int i:ans){
    	cout << i << ' ';
	}
}

