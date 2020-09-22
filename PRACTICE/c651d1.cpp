/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define endl '\n'
#define elif else if
#define pb push_back
#define ll long long
#define pf push_front
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
ll t;

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	ll r,c;
    	cin >> r >> c;
    	
    	ll x = min(r,c);
    	
    	ll ans=0;
    	
    	ll one=0;
    	
    	one += (x+1)*((r-1)*(r)/2);
    	one += (x);
    	
    	ll two = (x+1)*((c-1)*(c)/2);
    	one += x;
    	
    	cout << one+two << endl;
    	
    	
	}
    
}

