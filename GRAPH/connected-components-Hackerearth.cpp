/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;


void addEdge(vector<int> adj[], int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void DFSUtil(vector<int> adj[], int u, vector<bool> &visited){
	visited[u]=true;
	for(int i=0; i<adj[u].size(); i++){
		if(!visited[adj[u][i]]){
			DFSUtil(adj,adj[u][i],visited);
		}
	}
}

int DFS(vector<int> adj[], int V){
	vector<bool> visited(V+1,false);
	int count = 0;
	for(int i=1; i<=V; i++){
		if(!visited[i]){
			count ++;
			DFSUtil(adj, i, visited);
		}
	}
	return count;
}



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    
    int n,e;
    cin >> n >> e;
    vector<int> adj[n+1];
    while(e--){
    	int  u,v;
    	cin >> u >> v;
    	addEdge(adj,u,v);
    
	}
	cout << DFS(adj,n)<<endl;
    
}

