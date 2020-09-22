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
	if(p1.second>p2.second){
		return true;
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
    
    vector<pair<ll,ll>> vec;
    
    for(int i=0; i<n; i++){
    	ll m;
    	cin >> m;
    	vector<ll> v;
    	for(int j=0; j<m; j++){
    		cin >> t;
    		v.pb(t);
		}
		ll a,b;
		a = m;
		b = *max_element(v.begin(),v.end());
		vec.pb({a,b});
	}
	
	sort(vec.begin(),vec.end(),comp);
	
	
	ll maxx=0;
	
	ll ans=0;
	
	for(int i=0; i<n; i++){
		
		ll a,b;
		
		a = vec[i].first;
		b = vec[i].second;
		
		maxx = max(maxx,b);
		
		ans += (maxx-b)*a;
		
	}
    cout << ans << endl;
}

