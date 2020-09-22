/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

ll lcm(ll a, ll b){
	return (a*b)/__gcd(a,b);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll t;
    cin >> t;
    while(t--){
    	ll n;
    	cin>>n;
    	cout<<lcm(4*n,n+1)/(n+1)+1<<endl;
	}
}

