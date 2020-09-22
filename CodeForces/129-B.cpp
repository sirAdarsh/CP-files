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
vector<int> adj[200];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,m;
    cin >> n >> m;
    for(int i=0; i<m; i++){
    	int a,b;
    	cin >> a >> b;
    	adj[a].pb(b);
    	adj[b].pb(a);
	}
	int size[n+1];
	memset(size,1,sizeof(size));
	for(int i=1; i<=n; i++){
		size[i]=adj[i].size()+1;
	}
	int ans=0;
	while(1){
		bool fault=false;
		vector<int> v;
		for(int i=1; i<=n; i++){
			if(size[i]==2){
				size[i]--;
				v.pb(i);
				fault=true;
			}
		}
		if(!fault){
			break;
		}
		DBG(v);
		for(int j:v){
			for(auto k:adj[j]){
				size[k]--;
			}
		}
		ans++;
	}
	cout << ans << endl;
}

