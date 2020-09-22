#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    ll arr[n+1];
    ll dp[n+1];
    for(int i=1; i<=n; i++){
    	cin >> arr[i];
    	dp[i] = 1;
	}
    
    ll maxm = 1;
    
    for(int i=2; i<=n; i++){
    	
    	for(int j = 1; j<i ; j++){
    		
    		
    		if( arr[i] * arr[j] < 0  && abs(arr[j]) < abs(arr[i]) ){
    			
    			dp[i] = max( dp[i], dp[j] + 1 );
			}
    		
		}
    	if(dp[i]>maxm){
    		maxm = dp[i];
		}
	}
    
	cout<<maxm<<endl;
    
    
}

