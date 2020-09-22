/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

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

vector<bool> present(26,false);
vector<bool> visited(26,false);

void addEdge(vector<int> adj[], int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void dfsUtil(vector<int> adj[],  int u){
	visited[u]=true;
	for(int i=0; i<adj[u].size(); i++){
		if(!visited[adj[u][i]]){
			dfsUtil(adj, adj[u][i]);
		}
	}
}

int dfs(vector<int> adj[]){
	
	int comps=0;
	
	for(int i=0; i<26; i++){
		if(!present[i]){
			continue;
		}
		if(!visited[i]){
			dfsUtil(adj, i);
			comps++;
		}
	}
	
	return comps;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    
    vector<int> adj[26];
	while(n--){
		cin >> s;
		int f;
		present[s[0]-'a']=true;
		
		for(int i=1; i<s.size(); i++){
			
			present[s[i]-'a']=true;
			addEdge(adj, s[i]-'a', s[0]-'a');
		}

	}
	
	cout << dfs(adj);
    
}

