/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

ll n,k;

bool check(ll arr[], ll mid){
	
	ll mods=0;
	
	for(int i=n/2; i<n; i++){
		mods += (mid-arr[i]);
	}
	if(mods<=k){
		return true;
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> n >> k;
    ll arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr,arr+n);
    
    // binary search the maximum possible median
    // the search space being [1,1e9]
    
    ll lo=1, hi = 2e9;
    ll ans = -1;
    ll mid;
    while(lo<=hi){
    	mid = (lo+hi)/2;
    	if(check(arr,mid)){
    		ans = max(mid,ans);
    		lo = mid+1;
		}
		else{
			hi = mid-1;
		}
	}
	
	cout << ans << endl;
    
}

