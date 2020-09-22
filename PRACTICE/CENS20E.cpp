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


void addEdge(vector<int> adj[], int u, int v){
	adj[u].pb(v);
	adj[v].pb(u);
}

int dfsUtil(vector<int> adj[], int u, vector<bool> &visited, int wt[], int ty, int k){
	
	
	
	int tmp=0;
	
	int pr=wt[u]^k;
	
	int bits=__builtin_popcount(pr);
	if(ty==1){
		if( bits%2){
			tmp=1;
		}
		else{
			return tmp;
		}
	}
	else{
		if( bits%2==0){
			tmp=1;
		}
		else{
			return tmp;
		}
	}
	
	visited[u]=true;
	
	
	for(int i=0; i<adj[u].size(); i++){
		
		if(!visited[adj[u][i]]){
			tmp += dfsUtil(adj, adj[u][i],visited, wt, ty, k);
		}
		
	}
	return tmp;
}


int dfs(vector<int> adj[], int V, int wt[], int ty, int k){
	vector<bool> visited(V+1,false);
	
	int maxx = 0;
	
	for(int i=1; i<=V; i++){
		
		int a=0;
		
		if(!visited[i]){
			maxx = max(maxx,a+dfsUtil(adj,i,visited, wt, ty, k));
		}
		
	}
	return maxx;
}



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	
    	int n,m;
    	cin >> n >> m;
    	
    	vector<int> adj[n+1];
    	
    	int wt[n+1];
    	
    	for(int i=1; i<=n; i++){
    		cin >> wt[i];
		}
    	
    	for(int i=0; i<m; i++){
    		int a,b;
    		cin >> a >> b;
    		addEdge(adj,a,b);
		}
		
		int q;
		cin >> q;
		
		while(q--){
			int ty,k;
			cin >> ty >> k;
			cout << dfs(adj, n, wt, ty, k) << endl;
		}
    	
	}
    
}

