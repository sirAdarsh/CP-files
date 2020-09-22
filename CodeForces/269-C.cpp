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

string s;

int n;

vector<int> adj[MAX];

unordered_map<string,bool> mp;

void addEdge(int u, int v){
	adj[u].pb(v);
	adj[v].pb(u);
}

vector<int> ans;

void dfs(int src, int par, bool t){
	
	bool leaf=true;
	
	for(auto child : adj[src]){
		if(child!=par){
			leaf=false;
			if(!t){
				string str="";
				str =to_string(src);
				str =str+'|';
				str =str+to_string(child);
				cout << str << endl;
				if(mp[str]){
					t=1;
				}
			}
			dfs(child,src,t);
		}
	}
	
	if(leaf){
		printf("%d\n",src);
		if(t){
			ans.pb(src);
		}
	}
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> n;
    for(int i=1; i<n; i++){
    	int a,b,t;
    	cin >> a >> b >> t;
    	addEdge(a,b);
    	
    	if(t==2){
    		s="";
	    	s = to_string(a);
	    	s = s+'|';
	    	s = s+to_string(b);
    		mp[s]=1;
    		s = "";
    		s = to_string(b);
	    	s = s+'|';
	    	s = s+to_string(a);
    		mp[s]=1;
		}
		
	}
	
	dfs(1,0,0);
	
	cout << ans.size()<<endl;
	for(int i:ans){
		cout << i << ' ';
	}
	
    
}

