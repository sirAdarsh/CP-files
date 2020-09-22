#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int A[] = {4,2,2,1,0,8,1};
    int n = sizeof(A)/sizeof(A[0]);
    
    int dp[n]; // stores the min no. of jumps to reach i from 0
    
    for(int i=0; i<n; i++){
    	dp[i] = INT_MAX;
	}
	
	dp[0] = 0;
	
	for(int i=0; i<n; i++){
		
		for(int j=i+1; j<=i+A[i]; j++){
			
			if( dp[j] == INT_MAX ){
				dp[j] = dp[i] + 1;
			}
		}
	}
    
    for(int i=0; i<n; i++){
    	cout<<dp[i]<<" ";
	}
}

