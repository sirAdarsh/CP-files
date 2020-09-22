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
    ll n,s;
    cin >> n >> s;
    ll arr[n];
    for(int i=0; i<n; i++){
    	cin >> arr[i];
	}
	sort(arr,arr+n);
	ll mid = n/2;
	
	if(s==arr[mid]){
		cout << 0 << endl;
	}
	else if(s<arr[mid]){
		
		ll ans=0;
		for(int i=mid; i>=0; i--){
			if(arr[i]==s){
				break;
			}
			ans += (arr[i]-s);
		}
		cout << ans <<endl;
	}
	else{
		ll ans=0;
		for(int i=mid; i<n; i++){
			if(arr[i]==s){
				break;
			}
			ans += (s-arr[i]);
		}
		cout << ans << endl;
	}
	
}

