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
int n,x;

void addEdge(vector<int> adj[], int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	cin >> n >> x;
    	vector<int> adj[n+1];
    	int a,b;
    	for(int i=1; i<n; i++){
    		cin >> a >> b;
    		addEdge(adj,a,b);
		}
    	
    	
    	// leaf
    	
    	if(adj[x].size()<=1){
    		cout <<"Ayush";
		}
		else{
			
			if(n%2){
				cout <<"Ashish";
			}
			else{
				cout << "Ayush";
			}
			
		}
    	cout << endl;
	}
    
}

