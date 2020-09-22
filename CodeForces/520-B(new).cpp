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

//string s;
int t;
int m;

vector<int> adj[30002];

void pre_(){
	for(int i=1; i<=10000; i++){
		adj[i].pb(i-1);
		adj[i].pb(2*i);
	}
}

int bfs_(int s){
	
	int ans;
	
	int steps[30002];
	bool vis[30002];
	
	queue<int> q;
	q.push(s);
	
	steps[s]=0;
	
	vis[s]=true;
	
	if(s==m){
		return ans=steps[s];
	}
	
	while(!q.empty()){
		int p=q.front();
		q.pop();
		for(int i=0; i<adj[p].size(); i++){
			if(vis[adj[p][i]]==false){
				steps[adj[p][i]]=steps[p]+1;
				q.push(adj[p][i]);
				vis[adj[p][i]]=true;
			}
			if(adj[p][i]==m){
				return steps[adj[p][i]];
			}
		}
	}
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    pre_();
    cin >> n >> m;
    cout << bfs_(n);   
}

