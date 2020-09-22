/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

void addEdge(vector<int> adj[], int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void DFSUtil( vector<int> adj[], int u, int prev, vector<int> &dist, vector<bool> &visited ){
	visited[u]=true;
	dist[u]= 1+dist[prev];
	for(int i=0; i<adj[u].size(); i++){
		if(!visited[adj[u][i]]){
			DFSUtil(adj, adj[u][i], u, dist, visited);
		}
		
	}
}

int DFS(vector<int> adj[], int V, vector<bool> qu){
	
	vector<bool> visited(V+1,false);
	vector<int> dist(V+1, 0);
	DFSUtil(adj, 1, 0, dist, visited);
	
	int minDist=INT_MAX;
	int ansNode=0;
	
	for(int i=0; i<dist.size(); i++){
		if(dist[i]<minDist && qu[i]==true){
			minDist = dist[i];
			ansNode = i;
		}
		
		
	}
	
	return ansNode;
	
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    int nt= n;
    vector<int> adj[n+2];
    n--;
    while((n)--){
    	int u,v;
    	cin >> u >> v;
    	addEdge(adj, u, v);
	}
	int q;
	
	cin >> q;
	vector<bool> qu(nt+1);
	while(q--){
		int f;
		cin >> f;
		qu[f]=true;
	}
	cout << DFS(adj, nt, qu);
    
}

