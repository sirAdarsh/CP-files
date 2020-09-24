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
int bi[100];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	
    	ll n;
    	cin >> n;
    	ll ar[n];
		memset(bi,0,sizeof(bi));
		
		ll ans=0;
		
		for(ll i=0; i<n; i++){
			cin >> ar[i];
		}
    	
    	for(ll i=0; i<n; i++){
    		
			s = bitset<64>(ar[i]).to_string();
			
				for(ll j=0; j<64; j++){
					if(s[j]=='1'){
						ans += bi[j];
						bi[j]+=1;
						break;
					}
				}
    		
		}
		
		cout << ans << endl;
    	
	}
    
}

