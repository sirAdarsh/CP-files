#include<bits/stdc++.h>
#define ll long long
using namespace std;

int solve(int n){
	
	int dp[n+1];
	dp[1]=dp[2]=dp[3]=1;
	dp[4]=2;
	
	for(int i=5; i<=n; i++){
		
		dp[i] = dp[i-1] + dp[i-4];
		
	}
	return dp[n];
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cout<<solve(6);
    
}

