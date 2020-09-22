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

int val[]={0,3, 2, 1, 10, 1, 3, 9, 1, 5, 3, 4, 5, 9, 8};

int wt[15];

int maxVal(vector<int> adj[], int u, int parent){
	
	wt[u]=val[u];
	int maxx=0;
	for(auto child : adj[u]){
		if(child!=parent){
			maxx = max(maxx,maxVal(adj, child, u));
		}
	}
	return wt[u]+maxx;
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n=14;
    vector<int> adj[15];
    
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,1,4);
    addEdge(adj,2,5);
    addEdge(adj,2,6);
    addEdge(adj,3,7);
    addEdge(adj,4,8);
    addEdge(adj,4,9);
    addEdge(adj,4,10);
    addEdge(adj,5,11);
    addEdge(adj,5,12);
    addEdge(adj,7,13);
    addEdge(adj,7,14);
    
    cout << maxVal(adj,1,0);
    
}

