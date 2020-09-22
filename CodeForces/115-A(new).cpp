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
#define MAX 2005
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;
vector<int> adj[MAX];
void addEdge(int u, int v){
	adj[u].pb(v);
	adj[v].pb(u);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
    	cin >> t;
    	if(t!=-1){
    		addEdge(i,t);
		}
    	
	}
	
	int maxx=1;
	
	for(int i=1; i<=n; i++){
//		t = adj[i].size();
//		maxx = max(maxx,1+t);
		cout << "i = "<<i <<" --> ";
		for(auto j:adj[i]){
			cout << j <<' ';
		}
		cout << endl;
	}
	cout << maxx << endl;
}

