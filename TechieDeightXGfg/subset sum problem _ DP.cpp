#include<bits/stdc++.h>
using namespace std;

int isSubset(int arr[], int n, int sum){
	
	int dp[n+1][sum+1];
	// if n ==0 and sum != 0, dp[][] = F
	for(int i=0; i<=sum; i++){
		dp[0][i] = false;
	}
	// if sum == 0, dp[][] = T
	for(int i=0; i<=n; i++){
		dp[i][0] = true;
	}
	
	for(int i=1; i<=n; i++){
		for(int j=0; j<=sum; j++){
			
			if( j - arr[i] >=0 ){
				dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i]];
			}
			else{
				dp[i][j] = dp[i-1][j];
			}
			
		}
	}
	return dp[n][sum];
}

int main(){
	int set[] = {3,34,4,12,5,2};
	int size = sizeof(set)/sizeof(set[0]);
	int sum = 1;
	cout << isSubset(set,size,sum);
}
