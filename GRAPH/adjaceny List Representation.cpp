#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void printGraph(vector<int> adj[],int V){
	
	for(int i=0;i<V;i++){
		cout<<"Edges corresponding to "<<i<<" ";
		for(auto x : adj[i]){
			cout<<" -> "<<x;
		}
		cout<<"\n";
	}
}



int main(){
	
	int V=5;
	vector<int> adj[5];
	addEdge(adj,0,1);
	addEdge(adj,0,4);
	addEdge(adj,1,3);
	addEdge(adj,1,2);
	addEdge(adj,1,4);
	addEdge(adj,3,2);
	addEdge(adj,4,3);
	printGraph(adj,V);
	
}

