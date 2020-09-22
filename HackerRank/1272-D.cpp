#include<bits/stdc++.h>
using namespace std;
#define m 100001

int dp[m][2];

int max(int a, int b){
	return (a>b) ? a : b;
}

int solve(int arr[], int n){
	
	dp[1][0] = 1;
	dp[1][1] = 0;
	
	for(int i=2; i<=n; i++){
		
		int a = dp[i-1][0];
		int b = dp[i-1][1];
		
		if( arr[i] - arr[i-1] > 0 ){
			dp[i][0] = max(a,b) + 1;
		}else{
			dp[i][0] = max( a,b);
		}
		
		dp[i][1] = max(a,b);
	}
	return max(dp[n][1],dp[n][0]);
}

int main(){
	int n;
	cin >> n;
	int arr[n+1];
	for(int i=1; i<=n; i++){
		cin >> arr[i];
	}
	cout << solve(arr,n);
}
