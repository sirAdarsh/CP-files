#include<iostream>
using namespace std;

int solve(int S, int arr[] ){
	
	int dp[10000][10000]={};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	for(int i=1; i<=n; i++){
		
		for(int j=0; j<=S; j++){
			
			dp[i][j] = dp[i-1][j] + dp[i][j-arr[i-1]];
			
		}
		
	}	
	return dp[n][S];
}

int main(){
	
	int arr[] = {1,2,3};
	int S = 4;
	cout << solve(S, arr);
	
}
