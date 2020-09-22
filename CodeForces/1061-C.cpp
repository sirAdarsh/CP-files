#include<iostream>
#define ll long long
using namespace std;

int main(){
	
	int n;
	cin >> n;
	ll arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	ll c =n;
	
	int dp[n+1]={}; //contains number of subarrays of length i upto current index
	
	dp[1] = 1;
	
	for(int i = 2; i<=n; i++){
		
		dp[1] = 1;
		
		for(int j= 2; j<=n; j++){
			
			if( arr[i-1] % j ){
				continue;
			}
			
			if( dp[j-1] != 0 ){
				dp[j] = dp[j-1];
				dp[1]++;	
			}
		}
//		cout<<dp[i]<<endl;
	}	
//	cout<<dp[n+1]<<endl;
	int p=0;
	for(int i=1;i<=n;i++){
		cout<<dp[i]<<endl;
		p+=dp[i];
	}
//	cout<<p;
}
