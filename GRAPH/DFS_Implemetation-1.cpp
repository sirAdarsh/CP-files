/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

void addEdge(vector<int> adj[], int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void DFSUtil(int u, vector<int> adj[], 
                    vector<bool> &visited) 
{ 
    visited[u] = true; 
    cout << u << " "; 
    for (int i=0; i<adj[u].size(); i++) 
        if (visited[adj[u][i]] == false) 
            DFSUtil(adj[u][i], adj, visited); 
} 

void DFS(vector<int> adj[], int V) 
{ 
    vector<bool> visited(V, false); 
    for (int u=0; u<V; u++) 
        if (visited[u] == false) 
            DFSUtil(u, adj, visited); 
} 


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int V=5;
    
    vector<int> adj[V];
    
    addEdge(adj,0,1);
    addEdge(adj,0,4);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,1,4);
    addEdge(adj,2,3);
    addEdge(adj,3,4);
    DFS(adj,V);
    
    
    
}

