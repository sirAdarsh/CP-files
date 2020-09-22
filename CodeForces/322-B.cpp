/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;
ll maxThree(ll a,ll b,ll c){
	a = max(a,b);
	return max(a,c);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    ll a,b,c;
    cin >> a >> b >> c;
    
    // zero bouqette
    ll ans1 = a/3+b/3+c/3;
    
    // one bouqette
    ll ans2=0;
    if( a>=1 && b>=1 && c>=1 ){
    	ans2 = 1+(a-1)/3+(b-1)/3+(c-1)/3;
	}
	
	//two bouqette
	ll ans3=0;
	if( a>=2 && b>=2 && c>=2 ){
		ans3 = 2 + (a-2)/3 + (b-2)/3 + (c-2)/3;
	}
	cout << maxThree ( ans1, ans2, ans3) << endl;
 	   
}

