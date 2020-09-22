/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
    	ll n;
    	cin >> n;
    	ll arr[n];
    	for(ll i=0; i<n; i++) cin >> arr[i];
    	sort(arr,arr+n);
    	ll ans = arr[0]*arr[n-1];
    	bool e =false;
    	for(int i=0; i<n;i++){
    		if(ans%arr[i]){
    			cout<<-1<<endl;
    			e=true;
    			break;
			}
		}
		
		if(!e){
			
			vector<ll> facs;
			
			for(ll i=2; i*1ll*i<=ans; i++){
				if(ans%i==0){
					facs.push_back(i);
					if( i!=ans/i){
						facs.push_back(ans/i);
					}
				}
			}
			sort(facs.begin(),facs.end());
			
			if(facs.size() != n){
				cout<<-1<<endl;
			}
			else{
				e=false;
				for(ll i=0; i<n; i++){
					if( arr[i]!=facs[i] ){
						e=true;
						cout<<-1<<endl;
						break;
					}
					
				}
				if(!e){
						cout<<ans<<endl;
					}
			}
			
		}
	}
    
}

