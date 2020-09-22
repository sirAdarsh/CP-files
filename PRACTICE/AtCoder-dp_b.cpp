#include<iostream>
using namespace std;

const int INF = 2*1e9;

int main(){
	int n,k;
	cin >> n >> k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int dp[n+1]={};
	
	
	for(int i=2; i<=n; i++){
		
		dp[i] = INF;
		
		for(int j=i-1; j>=max(1,i-k); j--){
			
			dp[i] = min( dp[i], dp[j] + abs(arr[i-1] - arr[j-1]) );
			
		}
	}
	cout<<dp[n]<<endl;
	
}
