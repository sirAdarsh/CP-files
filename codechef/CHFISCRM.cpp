/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

string solve(ll arr[], int n){
	
	unordered_map<ll,ll> m;
	m.clear();
	ll change;
	
	m[5]=0;
	m[10]=0;
	
	for(int i=0; i<n; i++){
		
		if( arr[i] == 5 ){
			m[5]++;
		}
		else{
			
			if(arr[i] == 10){
				change = 5;
				if(m[5]==0){
					return "NO";
				}
				else{
					m[5]--;
					m[10]++;
				}	
			}
			else if(arr[i]==15){
				change = 10;
				
				if( m[10]!=0 ){
					m[10]--;
				}
				else{
					if(m[5]>=2){
						m[5]-=2;
					}
					else{
						return "NO";
					}
				}
				
			}
		}
	}
	return "YES";
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	
    	int n;
    	cin >> n;
    	ll arr[n];
    	
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		cout << solve(arr,n) << endl;
    	
	}
    
}

