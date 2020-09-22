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
#define MOD 998244353
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,k;
    cin >> n >> k;
    ll sum=0;
    ll lst=n;
    ll ar[n];
    for(int i=0; i<n; i++){
    	cin >> ar[i];
	}
    for(int i=0; i<k; i++){
    	sum+=lst;
    	lst--;
	}
	ll ways=1;
	vector<ll> poss;
	
	for(int i=0; i<n; i++){
		if(ar[i]+k>n){
			poss.pb(i);
		}
	}
	
	for(int i=0; i<poss.size()-1; i++){
		ways = ( ways * (poss[i+1]-poss[i]) + MOD )%MOD;
	}
	cout << sum << ' ' << ways;
}

