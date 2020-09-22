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

ll first(ll a){
	for(ll i=2; i*i<=a; i++){
		if(a%i==0){
			return i;
		}
	}
	return -1;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> t;
    while(t--){
    	ll a,k;
    	cin >> a >> k;
    	ll f = first(a);
    	if(f==-1){
    		f=a;
		}
		k--;
		ll ans=a+f;
		ans += (2*k);
		cout << ans << endl;
	}
}

