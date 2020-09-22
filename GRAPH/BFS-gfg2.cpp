#include<bits/stdc++.h>
using namespace std;

vector< vector<int> > g;
vector<int> check;

void addEdge(int u,int w){
	
	//for directed graph
	g[u].push_back(w);
}
void BFS(int s){
	
	queue<int> q;
	
	q.push(s);
	check[s]=true;
	
	while(!q.empty()){
		
		int f = q.front();
		cout << f <<" ";
		q.pop();
		
		for(auto i = g[f].begin(); i != g[f].end(); i++ ){
			
		}
		
	}
	
}

