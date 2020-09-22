/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	ll n,r;
    	cin >> n >> r;
    	
    	ll ans=0;
    	
    	if(r<n){
    		ans = r*(r+1)/2;
		}
    	else if(n==r){
    		ans = n*(n-1)/2;
    		ans++;
		}
		else{
			int a = n;
			ans = n*(n-1)/2+1;
//			ll d=2;
//			ll terms;
//			cout << "  " << ans << endl;
//			cout << r << " "<< a << endl;
//			terms = ceil((float)r-(float)a)/2;
//			terms++;
//			cout << terms << endl;
//			ans += terms;
		}
		cout << ans << endl;
	}
    
}

