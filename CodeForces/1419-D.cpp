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
    ll ar[n];
    for(int i=0; i<n; i++){
    	cin >> ar[i];
	}
	
	sort(ar,ar+n);
	
	vector<ll> ans(n,0);


	ans[0]=ar[n-2];
	ans[n-1] = ar[n-1];

	ll it=0;
	
	for(ll i=1; i<n; i+=2){
		
		if(ans[i]==0){
			ans[i] = ar[it];
			it++;
		}
		
		
	}
	
		
	for(ll i=2; i<n; i+=2){
		
		if(ans[i]==0){
			ans[i]=ar[it];
			it++;
		}
		
	}

	ll cnt=0;
	
	for(ll i=1; i<n-1; i++){
		if( ans[i]<ans[i-1] && ans[i]<ans[i+1] ){
			cnt++;
		}
	}
	cout << cnt << endl;
    for(auto i : ans){
    	cout << i << ' ';
	}
}

