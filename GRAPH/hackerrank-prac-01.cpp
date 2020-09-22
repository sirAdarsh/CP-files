#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int x,int y){
	adj[x].push_back(y);
	adj[y].push_back(x);
}

int main(){
	int n,m;
	cin >> n >> m;
	
	vector<int> adj[n];
	
	while(m--){
		int a,b;
		cin >> a >> b;
		addEdge(adj,a,b);
	}
	int q;
	cin >> q;
	bool end;
	while(q--){
		int a,b;
		cin >> a >> b;
		end=false;
		for(auto i: adj[a]){
			if(i==b){
				cout<<"YES"<<endl;
				end=true;
				break;
			}
		}
		if(end==false){
			cout<<"NO"<<endl;
		}
		
	}
}



