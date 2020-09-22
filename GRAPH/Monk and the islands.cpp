#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > adj;

void addEdge(int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}
int BFS( int src,int dest){
	
	queue<int> q;
	q.push(src);
	bool checked[dest+1];
	checked[src]=true;
	int level[dest+1];
	level[src]=0;
	
	while(!q.empty()){
		
		int u = q.front();
		q.pop();
		
		for(auto v : adj[u]){
			
			if(!checked[v]){
				checked[v]=true;
				level[v] = level[u] + 1;
				if(v == dest){
					return level[v];
				}
				q.push(v);
			}
		
		}
		
	}
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n , m ;
		cin >> n >> m;
		
		adj.assign(n+1,vector<int>());
		
		int a,b;
		
		while(m--){
			cin >> a >> b;
			addEdge(a,b);
		}
		cout<<BFS(1,n)<<endl;
	}
}
