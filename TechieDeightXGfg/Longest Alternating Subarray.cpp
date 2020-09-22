#include<iostream>
using namespace std;

void solve(int arr[], int n){

	int ending_index=0;
	
	int p =1;
	
	int dp[n];
	dp[0] = 1;
	
	for(int i=1; i<n; i++){
		
		if( arr[i] * arr[i-1] < 0 ){
			p++; 
		} 
		else{
			p = 1;
		}
		
		if( p > dp[i-1] ){
			dp[i] = p;
			ending_index = i;
		}
		else{
			dp[i] = dp[i-1];
		}
		
	}
	cout<<dp[n-1];
}

int main(){
	int arr[8];
	for(int i=0; i<8; i++){
		cin >> arr[i];
	}
	solve(arr, 8);
	
}
