/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

void addEdge(vector<int> adj[], int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void printAns(vector<bool> visited){
	for(auto i : visited){
		if(i==false){
			cout << i <<" ";
		}
	}
}

void DFSUtil(vector<int> adj[], int u, vector<bool> visited){
	visited[u]=true;
	for(int i=0; i<adj[u].size(); i++){
		if(!visited[adj[u][i]]){
			DFSUtil(adj,adj[u][i],visited);
		}
	}
}

void DFS(vector<int> adj[], int V){
	vector<bool> visited(V,false);
	for(int i=0; i<V; i++){
		if(!visited[i]){
			DFSUtil(adj, i, visited);
		}
	}
	printAns(visited);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int V;
    V=9;
    vector<int> adj[V];
    
    addEdge(adj,1,5);
    addEdge(adj,5,1);
    addEdge(adj,5,6);
    addEdge(adj,5,2);
    addEdge(adj,6,5);
    addEdge(adj,6,8);
    addEdge(adj,6,4);
    addEdge(adj,4,6);
    addEdge(adj,8,6);
    addEdge(adj,8,2);
    addEdge(adj,2,5);
    addEdge(adj,2,8);
    addEdge(adj,3,7);
    addEdge(adj,7,3);
    DFS(adj,V);
}

