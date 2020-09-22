/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define pb push_back
#define pf push_front
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

vector<int> adj[2005];

int dfsUtil(int u, vector<bool> &visited){
	int a=1;
	visited[u]=true;
	vector<int> nod;
	nod.pb(0);
	for(auto link:adj[u]){
		int nodes=0;
		if(!visited[link]){
			nodes+=dfsUtil(link,visited);
		}
		nod.pb(nodes);
	}
	int add=*max_element(nod.begin(),nod.end());
	return a+add;
}

int dfs(int src, int V){
	vector<bool> visited(V+1,false);
	int maxx=1;
	for(int i=1; i<=V; i++){
		int cur= dfsUtil(i,visited);
		maxx=max(maxx,cur);
	}
	return maxx;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin >> n;
	for(int i=1; i<=n; i++){
		int a;
		cin >> a;
		if(a!=-1){
			adj[a].pb(i);
			adj[i].pb(a);
		}
	}
	cout << dfs(1,n);
	
}

