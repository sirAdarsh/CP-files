#include<bits/stdc++.h>
#define ll long long
using namespace std;

int solve(int n, int m){
	int dp[n] = {};
	dp[0] = 1;
	
	for(int i=0; i<n; i++){
		for(int j=1; j<=m; j++){
			dp[i + j] = dp[i + j] + dp[i];
		}
	}
	return dp[n-1];
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin >> n >> m;
    cout<<solve(n,m);
}

