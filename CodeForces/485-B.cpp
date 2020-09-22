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
    ll n;
    cin >> n;
    vector<pair<ll,ll>> vec;
    for(int i=0; i<n; i++){
    	ll a,b;
    	cin >> a >> b;
    	vec.pb({a,b});
	}
	ll Xd=0,Yd=0;
	ll Xmn=INT_MAX;
	ll Xmx=INT_MIN;
	ll Ymn=INT_MAX;
	ll Ymx=INT_MIN;
	for(auto i : vec){
		Xmn = min(Xmn,i.first);
		Xmx = max(Xmx,i.first);
		Ymn = min(Ymn,i.second);
		Ymx = max(Ymx,i.second);
	}
	ll syd=max(Xmx-Xmn,Ymx-Ymn);
	ll ans=syd*syd;
	cout<<ans;
}

