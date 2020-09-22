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

bool comp(pair<ll,ll> p1, pair<ll,ll> p2){
	return p1.first<p2.first;
}

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
	
	sort(vec.begin(),vec.end(),comp);
	
	ll ans=-1;
	
	ll maxA=LLONG_MIN, minA=LLONG_MAX, maxB=LLONG_MIN, minB=LLONG_MAX;
	
	for(int i=0; i<n; i++){
		
		ll A,B;
		ll x,y;
		x = vec[i].first;
		y = vec[i].second;
		
		A = x+y;
		B = x-y;
		
		maxA = max(maxA, A);
		minA = min(minA, A);
		maxB = max(maxB, B);
		minB = min(minB, B);
		
//		cout << maxA << ' ' << minA <<' ' << maxB << ' ' <<minB<<endl; 
		
		if(i!=0)
		ans = max(ans, max( maxA-minA, maxB-minB ));
		
	}
	cout << ans << endl;
}

