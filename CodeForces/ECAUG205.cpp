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

bool check(ll ar[], ll n, ll mid, ll k){
	
	ll cps=0;
	if(mid==0){
		return true;
	}
	for(ll i=0; i<n; i++){
		cps += (ar[i]/mid);
	}
	if(cps>=k){
		return true;
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> t;
    while(t--){
    	ll n,k;
    	cin >> n >> k;
    	ll ar[n];
    	for(int i=0;i<n; i++){
    		cin >> ar[i];
		}
		ll lo=0,hi=1e9+1,mid;
		ll ans=-1;
		while(lo<=hi){
			mid= lo-(lo-hi)/2;
//			cout << mid << endl;
			if(check(ar,n,mid,k)){
				if(ans<mid){
					ans=mid;
				}
				lo=mid+1;
			}
			else{
				hi=mid-1;
			}
		}
		cout << ans << endl;
	}
}

