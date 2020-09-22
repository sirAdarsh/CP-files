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
    
    vector<ll> v;
    v.pb(1);
    
    ll k = 2;
    
    ll p =1;
    
    while(p<=1e18){
    	
    	p+=p;
    	p += (k*k);
    	
    	k*=2;
    	
    	v.pb(p);
	}
	
	cin >> t;
	while(t--){
		
		ll n ;
		cin >> n;
		
		int cnt=0;
		
		for(auto i : v){
			
			if(i>n)break;
			cnt++;
			n-=i;
			
		}
		cout << cnt << endl;
	}
    
}

