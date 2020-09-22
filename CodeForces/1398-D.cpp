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
int R,G,B;

int dp[200][200][200];

ll maxOfThree(ll a, ll b, ll c){
	a = max(a,b);
	return max(a,c);
}

ll solve(vector<ll> &r, vector<ll> &g, vector<ll> &b, ll i, ll j, ll k){
	
	if(dp[i][j][k]!=-1){
		return dp[i][j][k];
	}
	
	ll ans=0;
	
	ll X=0,Y=0,Z=0;
	
	if(i<R && j<G)
	X = r[i]*g[j] + solve(r,g,b,i+1, j+1, k);
	
	if(i<R && k<B)
	Y = r[i]*b[k] + solve(r,g,b,i+1,j,k+1);
	
	if(j<G && k<B)
	Z = g[j]*b[k] + solve(r,g,b,i,j+1,k+1);
	
	ans = maxOfThree(X,Y,Z);
	return dp[i][j][k]=ans;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    
    cin >> R >> G >> B;
    vector<ll> r(R),g(G),b(B);
    
    for(ll i=0; i<R; i++){
    	cin >> r[i];
	}
	for(ll i=0; i<G; i++){
		cin >> g[i];
	}
	for(ll i=0; i<B; i++){
		cin >> b[i];
	}
	sort(r.begin(),r.end(),greater<>());
	sort(g.begin(),g.end(),greater<>());
	sort(b.begin(),b.end(),greater<>());
	memset(dp,-1,sizeof(dp));
	cout << solve(r,g,b,0,0,0);
    
}

