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
    ll n,m;
    cin >> n >> m;
    ll a[n],b[m];
    vector<ll> pre(n+1);
    pre[0]=0;
    for(ll i=0; i<n; i++){
    	cin >> a[i];
    	pre[i+1] = pre[i]+a[i];
	}
	for(ll i=0; i<m; i++){
		cin >> t;
		
		auto it = upper_bound(pre.begin(),pre.end(), t);
		cout << it-pre.begin()-1 << ' ';
		
	}
}

