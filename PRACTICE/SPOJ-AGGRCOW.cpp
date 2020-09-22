/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;
ll c;
bool check(ll arr[], ll mid, ll n){
	
	int cow_placed=1;
	int prev = arr[0];
	
	for(int i=1; i<n; i++){
		if(arr[i]-prev>=mid){
			cow_placed++;
			prev = arr[i];
		}
	}
	
	if(cow_placed >= c){
		return true;
	}
	return false;
	
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
    	cin >> n >> c;
    	ll arr[n];
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
		}
		sort(arr,arr+n);
		ll lo,hi,mid;
		lo = 0;
		hi = arr[n-1]-arr[0]; mid=(lo+hi)/2;
		
		while(lo<=hi){
			if(check(arr,mid,n)) lo=mid+1;
			else hi=mid-1;
			mid = (lo+hi)/2;
		}
		cout<<mid<<endl;
	}
    
}

