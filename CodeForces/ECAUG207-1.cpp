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

int childs[100001];

void solve(vector<int> adj[], int src, int par){
	
	childs[src]=1;
	
	for(auto child:adj[src]){
		if(child!=par){
			solve(adj,child,src);
			childs[src]+=childs[child];
		}
	}
	
	for(auto child : adj[src]){
		childs[child]=max(childs[child],childs[src]);
	}
	
}







int dfsUtil(vector<int> adj2[], int u, vector<bool> &visited){
	
	int an=1;
	
	visited[u]=true;
	
	for(auto child: adj2[u]){
		if(!visited[child]){
			an+=dfsUtil(adj2,child,visited);
		}
	}
	
	return an;
}

int dfs(vector<int> adj2[], int V){
	
	vector<bool> visited(V+1,false);
	
	int ans=0;
	
	for(int i=1; i<=V; i++){
		
		int tmp=0;
		
		if(!visited[i]){
			tmp = dfsUtil(adj2, i, visited);
		}
		
		if(tmp>ans){
			ans=tmp;
		}
		
	}
	return ans;
}













int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	cout<<"DSD";
    	memset(childs,0,sizeof(childs));
    	vector<int> adj[n+1];
    	
    	vector<pair<int,int>> vec2;
    	
    	for(int i=0; i<n-1; i++){
    		int a,b;
    		cin >> a >> b;
    		adj[a].pb(b);
    		adj[b].pb(a);
    		vec2.pb({a,b});
		}
		
		solve(adj,1,0);
		
		int ansX;
		
		int maxx=0;
		
		for(int i=1; i<=n; i++){
			cout << "childs of i = "<<i <<"  -> "<<childs[i] << endl;
			if(childs[i]>maxx){
				maxx=childs[i];
				ansX=i;
			}
		}
		
		
		vector<int> adj2[n+1];
		
		for(auto i : vec2){
			
			if(i.first==ansX || i.second==ansX){
				continue;
			}
//			cout << i.first << ' ' << i.second << endl;
			adj2[i.first].pb(i.second);
			adj2[i.second].pb(i.first);
			
		}
			
		int W = dfs(adj2,n);
		
		cout << ansX << ' ' << W << endl;
			
	}
}

