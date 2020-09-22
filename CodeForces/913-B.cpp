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

bool is_leaf(int src, int baap){
	for(auto beta : adj[src]){
		if(beta!=baap){
			return false;
		}
	}
	return true;
}

bool kya_bakchodi_hai(int src, int baap){
	
	int leaves=0;
	bool leaf=true;
	for(auto beta : adj[src]){
		if(beta!=baap){
			leaf=false;
			if(is_leaf(beta,src)){
				leaves++;
			}
		}
	}
	if(!leaf && leaves<3){
		return false;
	}
	return true;
}

bool flag=false;

bool pehla_bakchodi(int src, int baap){
	if(kya_bakchodi_hai(src,baap)==false){
			flag=true;
			return false;
	}
	for(auto beta : adj[src]){
		if(beta!=baap){
			if(pehla_bakchodi(beta,src)==false){
				flag=true;
				return false;
			}
			if(kya_bakchodi_hai(beta,src)==false){
				flag=true;
				return false;
			}
		}
	}
	if(flag){
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
    	int a;
    	cin >> a;
    	adj[i].pb(a);adj[a].pb(i);
	}
	
	if(pehla_bakchodi(1,0)==true){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	
}

