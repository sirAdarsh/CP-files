#include<bits/stdc++.h>
using namespace std;

int solve(int height[], int n){
	
	int dp[n];
	dp[0]=0;
	
	for(int i=1; i<n; i++){
		
		dp[i] = INT_MAX;
		
		for(int j=1; j<=i; j=j<<1){
			
			dp[i] = min( dp[i], abs(height[i]-height[i-j])+dp[i-j] );
			
		}
		
	}
	return dp[n-1];
}


int main(){
	int n;
	cin >> n;
	int height[n];
	for(int i=0; i<n; i++){
		cin >> height[i];
	}
	
	cout << solve(height,n)<<endl;
}
