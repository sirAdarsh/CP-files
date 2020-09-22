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
vector<int> adj[205];
unordered_map<string,int> mp;

void addEdge(int u, int v){
	adj[u].pb(v);
	adj[v].pb(u);
}
int ans=0;
int subs[205];
void jao(int src, int par){
	subs[src]=1;
	int maxx=0;
	for(auto child:adj[src]){
		if(child!=par){
			jao(child,src);
			maxx=max(maxx,subs[child]);
		}
	}
	subs[src]+=maxx;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    string s1,s2,s3;
    mp["polycarp"]=1;
    int tmp=2;
    for(int i=0; i<n; i++){
    	cin >> s1 >> s2 >> s3;
	    for(int i=0; i<s1.size(); i++){
	    	if(s1[i]>='A'&&s1[i]<='Z'){
	    		s1[i]+=32;
			}
		}
		for(int i=0; i<s3.size(); i++){
	    	if(s3[i]>='A'&&s3[i]<='Z'){
	    		s3[i]+=32;
			}
		}
		if(mp.count(s1)==0){
			mp[s1]=tmp;
			tmp++;
		}
		if(mp.count(s3)==0){
			mp[s1]=tmp;
			tmp++;
		}
		addEdge(mp[s1],mp[s3]);
	}
    
	jao(1,0);
	cout << subs[1];
    
}

