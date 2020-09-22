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
			DFSUtil(adj, adj[u][i], visited);
		}
	}
}


string solve(vector<int> adj[], int V){
	
	vector<bool> visited(V+1, false);
	visited[0]=1;
	DFSUtil(adj, 1, visited);
	
	for(auto i : visited){
		cout << i <<" ";
		if(i==false){
			return "NO";
		}
	}
	return "YES";
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n, m;
    cin >> n >> m;
    int tempM = m;
    vector<int> adj[n+1];
    while(m--){
    	int u,v;
    	cin >> u >> v;
    	addEdge(adj,u,v);
	}
	
	if(tempM+1 != n){
		cout  << "NO"<<endl;
	}
	else{
		cout << solve(adj, n) << endl;
	}
	
}

