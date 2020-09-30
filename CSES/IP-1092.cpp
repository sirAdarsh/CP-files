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
	
	ll sum;
	sum = n*(n+1)/2;
	
	if(sum&1){
		cout << "NO";
		return 0;
	}
	cout << "YES" << endl;
	unordered_map<ll,bool> mp;
	
	ll rem = sum/2;
	
	vector<int> a;
	ll f=0;
	
	for(ll i=n; ; i--){
		f++;
		if(rem<=i && rem>=1){
			mp[rem]=true;
			a.pb(rem);
			break;
		}
		rem-=i;
		mp[i]=true;
		a.pb(i);
	}
    
    ll s=n-f;
    
    vector<ll> b;
    for(ll i=1; i<=n; i++){
    	if(mp.count(i)==0){
    		b.pb(i);
		}
	}
	
	cout << f << endl;
	for(auto i:a){
		cout << i << ' ';
	}
	cout << endl << s << endl;
	for(auto i:b){
		cout << i << ' ';
	}
    
}

