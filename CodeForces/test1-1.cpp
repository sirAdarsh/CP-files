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
#define ull unsigned long long int
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
    ll ar[n];
    for(int i=0; i<n; i++){
    	cin >> ar[i];
	}
	
//	cout << log10(1e9)<<endl;
	
	ll hi = powl( 10, ceil(10/(n-1)) ) ;
	
//	cout << hi << endl;
	
	ll  lo = 1;
	
	ll ans=1e18;
	
	sort(ar,ar+n);
	
	for(ll i=lo; i<=2*hi; i++){
		ll dif = 0;
		
		for(ll j=0; j<n; j++){
			dif += abs(powl(i,j)-ar[j]);
		}
		
		if(dif<ans){
//			cout << i << ' '<<dif<<endl;
			ans=dif;
		}
		
	}
	cout << ans << endl;
}

