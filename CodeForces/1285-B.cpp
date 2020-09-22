#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll arr[], ll YasSum, ll n){
	
	ll max_so_far = arr[0], max_sum_here = 0;
	
	bool firstWaaleKaYogdaan = true;
	
	for(int i=0; i<n; i++){
		
		
		
		if( i == n-1 ){
			max_sum_here += arr[i];
			
			
			
			if( max_sum_here > max_so_far ){
				
				if( arr[0] < 0 ){
					max_so_far = max_sum_here;
					break;
				}
				
				if(firstWaaleKaYogdaan == false){
					if(max_sum_here > max_so_far){
						max_so_far = max_sum_here;
					}
				}
				else{
					
					if( max_sum_here - arr[0] > max_so_far ){
						max_so_far = max_sum_here - arr[0];
					}
					
				}
				
			}
			break;
		}
		max_sum_here += arr[i];
		
		if(max_sum_here > max_so_far){
			max_so_far = max_sum_here;
		}
		
		if(max_sum_here <= 0){
			max_sum_here = 0;
			firstWaaleKaYogdaan = false;
		}
		
	}
	if(max_so_far >= YasSum ){
		cout<<"NO"<<endl;
		return;
	}
	cout<<"YES"<<endl;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
    	ll n;
    	cin >> n;
    	ll arr[n];
    	
    	ll YasSum=0;
    	
    	for(ll i=0; i<n; i++){
    		cin >> arr[i];
    		YasSum += arr[i];
		}
		solve(arr, YasSum, n);
		
	}
    
}

