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

ll fact(int n){
	ll ans=0;
	for(int i=1; i<=n; i++){
		ans*=i;
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    
    // 10 ^(n-2)
    ll ans2=10;
    
    for(int i=1; i<n; i++){
    	ans2 = (ans2*10+MOD)%MOD;
	}
	
	ll ans = (  (ans2+MOD)%MOD +MOD)%MOD;
	
	cout << ans << endl;
    
}

