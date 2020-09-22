#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > g;
vector<int> check;

void addEdge(int u,int w){
	g[u].push_back(w);
}

vector<int> level;

void BFS(int s){
	queue<int> q;
	q.push(s);
	check[s]=true;
	
	
	
	level[s] = 0;
	while(!q.empty()){
		
		int f = q.front();
		q.pop();
		
		
		for(auto i = g[f].begin();i!=g[f].end();i++){
			
			if( !check[*i] ){
				check[*i]=1;
				level[*i] = level[f]+1;
				q.push(*i);
			}
		}
	}
}

int main(){
	int nodes;
	cin >> nodes;
	g.assign(nodes,vector<int>());
	check.assign(nodes,false);
	level.assign(10,0);
	
	
	addEdge(0,1);
	addEdge(0,2);
	addEdge(0,3);
	addEdge(1,4);
	addEdge(1,5);
	addEdge(2,6);
	addEdge(2,7);
	addEdge(3,7);
	
	BFS(0);
	cout<<level[5]<<endl;
	
	
}

