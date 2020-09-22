#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
typedef pair<int,int> iPair;


void addEdge( vector< pair<int,int> > adj[] , int u ,int v, int wt ){
	adj[u].push_back(make_pair(v,wt));
	adj[v].push_back(make_pair(u,wt));
}

void shortestPath( vector<pair<int,int> > adj[], int V , int src ){
	
	priority_queue< iPair, vector<iPair>, greater<iPair> > pq;
	pq.push(make_pair(0,src));
	
	vector<int> dist(V,INF);
	dist[src]=0;
	while(!pq.empty()){
		
		int u = pq.top().second;
		pq.pop();
		
		for(auto i : adj[u]){
			
			int v = i.first;
			int weight = i.second;
			if(dist[v]>dist[u]+weight){
				dist[v]=dist[u]+weight;
				pq.push(make_pair(dist[v],v));
			}
		}
		
	}
	cout<<"Vertex distance from Source\n";
	for(int i=0;i<V;i++){
		cout<<"   "<<i<<"    "<<dist[i]<<endl;
	}
	
}
int main(){
	int V = 9;
	vector<pair<int,int>> adj[V];
	
	addEdge(adj,0,1,4);
	addEdge(adj, 0, 7, 8); 
    addEdge(adj, 1, 2, 8); 
    addEdge(adj, 1, 7, 11); 
    addEdge(adj, 2, 3, 7); 
    addEdge(adj, 2, 8, 2); 
    addEdge(adj, 2, 5, 4); 
    addEdge(adj, 3, 4, 9); 
    addEdge(adj, 3, 5, 14); 
    addEdge(adj, 4, 5, 10); 
    addEdge(adj, 5, 6, 2); 
    addEdge(adj, 6, 7, 1); 
    addEdge(adj, 6, 8, 6); 
    addEdge(adj, 7, 8, 7); 
  
    shortestPath(adj, V, 0); 
	
	
	
	
}


