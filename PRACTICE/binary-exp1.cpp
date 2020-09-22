/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll binPow(ll a, ll b){
	ll res = 1;
	while(b>0){
		if(b&1){
			res = res * a % MOD;
		}
		a = a*a%MOD;
		b >>= 1;
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
	ll a,b;
	cin >> a >> b;
	cout << binPow(a,b)<<endl;
    
}

