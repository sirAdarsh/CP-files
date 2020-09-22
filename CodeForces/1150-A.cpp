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

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n,m,r;
    cin >> n >> m >> r;
    
    set<ll> st1,st2;
    
    for(ll i=0; i<n; i++){
    	cin >> t;
    	st1.insert(t);
	}
	for(ll i=0; i<m; i++){
		cin >> t;
		st2.insert(t);
	}
	
	ll buy=0, sell=0;
	
	buy = r/(*st1.begin());
	
	ll cost = r-(buy*(*st1.begin()));
	
	cost += (buy*(*st2.rbegin()));
	
	cout << max(cost,r) << endl;
    
}

