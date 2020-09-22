#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void BFS(int elems[], int src, vector<int> adj[],int N){
	
	queue<int> q;
	q.push(src);
	
	int levelOf[N+1]={};
	levelOf[src]=1;
	
	int l =0;
	
	int check[N+1]={};
	check[src]=1;
	
	while(!q.empty()){
		int u = q.front();
		q.pop();
		
		elems [ levelOf[u] ]++;
		
		for(auto i = adj[u].begin();i!=adj[u].end();i++){
			if(!check[*i]){
				
				levelOf[ *i ] = levelOf[u]+1;
				
				q.push(*i);
				check[*i]=1;
			}
			
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		
	int N;
	cin >> N;
	
	vector<int> adj[N+1];
	int level[N+1]={};
	for(int i=0;i<N-1;i++){
		int u,v;
		cin >> u >> v;
		addEdge(adj,u,v);
	}
	BFS(level,1,adj,N);
	int x;
	cin >> x;
	cout << level[x]<<endl;
}
}


