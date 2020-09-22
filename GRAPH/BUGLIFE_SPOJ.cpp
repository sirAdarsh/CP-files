/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

void addEdge(vector<int> adj[], int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

bool DFSUtil(vector<int> adj[], int u, vector<bool> &visited, vector<int> &col, int c){
	visited[u]=true;
	col[u]=c;
	for(int i=0; i<adj[u].size(); i++){
		if(!visited[adj[u][i]]){
			if(DFSUtil(adj, adj[u][i], visited, col, c^1)==false){
				return false;
			}
		}
		else{
			if(col[adj[u][i]]==col[u]){
				return false;
			}
		}
	}
	return true;
}


bool DFS(vector<int> adj[], int V){
	
	vector<bool> visited(V+1,false);
	vector<int> col(V+1);
	for(int i=1; i<=V; i++){
		if(!visited[i]){
			if(DFSUtil(adj,i,visited,col,0)==false){
				return false;
			}
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    for(int j=1; j<=t; j++){
    	int n,m;
    	cin >> n >> m;
    	
    	vector<int> adj[n+1];
    	for(int i=1; i<=m; i++){
    		int u, v;
    		cin >> u >> v;
    		addEdge(adj,u,v);
		}
		cout <<"Scenario #"<<j<<":"<<endl;
		if(DFS(adj,n)){
			cout<<"No suspicious bugs found!"<<endl;
		}
		else{
			cout<<"Suspicious bugs found!"<<endl;
		}
    	
	}
    
}

