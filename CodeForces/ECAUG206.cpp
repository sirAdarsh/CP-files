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

void dfsUtil(int u, vector<bool> &visited, vector<int> adj[]){
	visited[u]=true;
	for(auto child:adj[u]){
		if(!visited[child])
		dfsUtil(child,visited,adj);
	}
}

int solve(vector<int> adj[], int V){
	int ans=0;
	vector<bool> visited(V,false);
	for(int i=0; i<V; i++){
		if(!visited[i]){
			ans++;
			dfsUtil(i,visited,adj);
		}
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>t;
    while(t--){
    	int n,m;
    	cin >> n >> m;
    	vector<int> adj[n];
    	for(int i=0; i<m; i++){
    		int a,b;
    		cin >> a >> b;
    		adj[a].pb(b);
    		adj[b].pb(a);
		}
		cout << solve(adj,n)<<endl;
	}
}

