#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n){
	
	int dp[n+1];
	dp[0] = 1; dp[1] = 1; dp[2] = 2;
	
	for(int i=3; i<=n; i++){
		dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
	} 
	cout<< dp[n];
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    solve(n);
    
}

