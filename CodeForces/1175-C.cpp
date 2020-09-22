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
    
    cin >> t;
    while(t--){
    	ll n,k;
    	cin >> n >> k;
    	ll ar[n];
    	for(int i=0 ; i<n; i++){
    		cin >> ar[i];
		}
		ll minn = LONG_LONG_MAX;
		ll ans=-1;
		
		for(int i=0; i<n-k; i++){
			
			ll f = ar[i];
			ll l = ar[i+k];
			
			ll mid = (f+l)/2;
			
			ll di = max(mid-f,l-mid);
			
			if(mid+1<=l && mid+1>=f){
				mid++;
				ll tmpDi = min(di,max(mid-f,l-mid));
				if(tmpDi<di){
					di=tmpDi;
					mid++;
				}
				else{
					mid--;
				}
			}
			
			if(di<minn){
				minn=di;
				ans=mid;
			}
			
		}
		cout << ans << endl;
	}
    
}

