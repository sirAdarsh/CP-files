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
    
    ll n,k;
    cin >> n >> k;
    
    ll lo = 1, hi = pow(2,n)-1;
    ll midIdx;
    ll ans = n+1;
    
    while(lo<=hi){
    	midIdx = (lo+hi)/2;
    	ans--;
    	if(midIdx==k){
    		break;
		}
		if( k<midIdx ){
			hi=midIdx-1;
		}
		else{
			lo=midIdx+1;
		}
	}
    cout << ans << endl;
}

