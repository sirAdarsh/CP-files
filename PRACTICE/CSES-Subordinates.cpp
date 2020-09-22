/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

void addEdge(vector<int> adj[], int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

int subs[200005];

void dfs(vector<int> adj[], int u, int parent){
	
	subs[u]=0;
	
	for(auto child : adj[u]){
		
		if(child!=parent){
			
			dfs(adj, child, u);
			subs[u]+=1+subs[child];
			
		}

	}
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    vector<int> adj[n+1];
    for(int i=2; i<=n; i++){
    	cin >> t;
    	addEdge(adj,i,t);
	}
    dfs(adj,1,0);
    for(int i=1; i<=n; i++){
    	cout << subs[i] <<' ' ;
	}
    
}

