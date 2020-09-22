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

vector<int> adj[1005];

bool is_leaf(int src, int par){
	for(auto child:adj[src]){
		if(child!=par) return false;
	}
	return true;
}

bool dfs(int src, int par){
	bool leaf=true;
	int leaves=0;
	for(auto child:adj[src]){
		if(child!=par){
			leaf=false;
			if(is_leaf(child,src)) leaves++;
			if(dfs(child,src)==false){
				return false;
			};
		}
	}
	if(leaf){
		return true;
	}
	if(leaves<3){
		return false;
	}
	return true;
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    for(int i=2; i<=n; i++){
    	int a; cin >> a; adj[i].pb(a); adj[a].pb(i);
	}
	cout << ((dfs(1,0)==0)?("No"):("Yes"));
    
}

