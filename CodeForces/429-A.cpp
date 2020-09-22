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
#define MAX 100001
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};


vector<int> adj[MAX];
vector<int> cmp(MAX);
vector<int> ideal(MAX);

void addEdge(int u, int v){
	adj[u].pb(v);
	adj[v].pb(u);
}


int ans=0;
vector<int> vec;


// chip = 1 -> odd depth, chip = 2 -> even depth

void dfs(int src, int par, int depth, int od, int ev){
	
	depth+=1;
	
	if(depth%2){
		if(od%2){
			if(cmp[src]==ideal[src]){
				ans++;
				vec.pb(src);
				od++;
			}
		}
		else{
			if(cmp[src]!=ideal[src]){
				ans++;
				vec.pb(src);
				od++;
			}
		}
	}
	
	if(depth%2==0){
		if(ev%2){
			if(cmp[src]==ideal[src]){
				ans++;
				vec.pb(src);
				ev++;
			}
		}
		else{
			if(cmp[src]!=ideal[src]){
				ans++;
				vec.pb(src);
				ev++;
			}
		}
	}
	
	for(auto child: adj[src]){
		if(child!=par){
			dfs(child,src,depth,od,ev);
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
    int u,v;
    for(int i=1; i<n; i++){
    	cin >> u >> v;
    	addEdge(u,v);
	}
    for(int i=1; i<=n; i++){
    	cin >> cmp[i];
	}
	for(int i=1; i<=n; i++){
		cin >> ideal[i];
	}
    
    dfs(1,0,0,0,0);
    cout << ans << endl;
    for(int i:vec){
    	cout << i<<endl;
	}
    
}

