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
    vector<ll> vec(100000);
    unordered_map<ll,bool> mp;
    for(ll i=1; i<vec.size(); i++){
    	vec[i]=(ll)(i*(i+1)/2);
    	mp[vec[i]]=true;
	}
	ll n;
	cin >> n;
	bool done=false;
	for(int i=1; i<100000; i++){
		ll req = n-vec[i];
		if(req>0){
			if(mp[req]){
				done=true;
				cout <<"YES";
				break;
			}
		}
	}
	if(!done)
	cout << "NO";
}

