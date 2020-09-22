#include<bits/stdc++.h>
#define ll long long
using namespace std;

int LIS(int arr[], int n){
	
	int dp[n];
	for(int i=0; i<n; i++){
		dp[i] = 1;
	}
	for(int i=1; i<n; i++){
		for(int j=0; j<i; j++){
			if( arr[j] < arr[i] ){
				dp[i] = max( dp[j]+1, dp[i]);
			}
		}
	}
	return dp[n-1];
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int arr[] = {10,22,9,33,21,50,41,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<LIS(arr,n)<<endl;
}

