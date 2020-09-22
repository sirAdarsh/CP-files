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
    	int n;
    	cin >> n;
    	ll ar[n];
    	ll negs=0;
    	for(int i=0; i<n; i++){
    		cin >> ar[i];
    		if(ar[i]<0){
    			negs++;
			}
		}
		ll ans= LONG_LONG_MIN;
		
		sort(ar,ar+n);
		
		ll uni=1;
		for(int i=n-1; i>=n-5; i--){
			uni*=ar[i];
		}
		if(negs==n){
			cout << uni << endl;
		}
		else if(negs<=1){
			cout << uni << endl;
		}
		else if(negs<4 && negs>1){
			
			ll a1=1;
			for(int i=0; i<2; i++){
				a1*=ar[i];
			}
			for(int i=n-1; i>=n-3; i--){
				a1*=ar[i];
			}
			ans = max(uni,a1);
			cout << ans << endl;
		}
		else if(negs>=4){
			ll a1=1;
			for(int i=0; i<4; i++){
				a1*=ar[i];
			}
			for(int i=n-1; i>=n-1; i--){
				a1*=ar[i];
			}
			
			
			ll a2=1;
			for(int i=0; i<2; i++){
				a2*=ar[i];
			}
			for(int i=n-1; i>=n-3; i--){
				a2*=ar[i];
			}
			
			ans=max(uni,max(a1,a2));
			cout << ans <<endl;
		}
	}
}

