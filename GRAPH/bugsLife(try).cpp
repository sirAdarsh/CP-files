/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int t;

void addEdge(vector<int> adj[], int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

bool DFSUtil(vector<int> adj[], int u, vector<bool> visited, int col, vector<int> color){
	
	visited[u]=true;
	
	for(int i=0; i<adj[u].size(); i++){
		if(!visited[adj[u][i]]){
			color[adj[u][i]] = col;
			if(DFSUtil(adj, adj[u][i], visited, col^1, color) == false){
				return false;
			}
		}
		else{
			if(color[u] == color[adj[u][i]]){
				return false;
			}
		}
	}
	return true;
}


bool DFS(vector<int> adj[], int bugs, int col){
	
	vector<int> color(bugs+1);
	
	vector<bool> visited(bugs+1, false);
	
	for(int i=1; i<=bugs; i++){
		
		color[i] = col;
		
		if(!visited[i]){
			if(DFSUtil(adj, i, visited, col^1, color)==false){
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
    
    cin >> t;
    for(int i=1; i<=t; i++){
    	
    	int bugs,intr;
    	cin >> bugs >> intr;
    	vector<int> adj[bugs+1];
    	while(intr--){
    		int a,b;
    		cin >> a >> b;
    		addEdge(adj, a, b);
		}
		
		cout <<"Scenario #"<<i<<":"<<endl;
		if(DFS(adj,bugs,0)){
			cout<<"No suspicious bugs found!"<<endl;
		}
		else{
			cout<<"Suspicious bugs found!"<<endl;
		}
		
	}
    
}

