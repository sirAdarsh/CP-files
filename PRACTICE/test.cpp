#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int mod = 1e9 + 7;

int dp[101][1000001];

int32_t main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, x;
	cin >> n >> x;
	int coins[n];
	for(int i = 0; i < n; i++) cin >> coins[i];
	
	for(int i=0; i<=n; i++){
		dp[i][0]=1;
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 0; j <= x; j++){
			if(j>=coins[i-1])
				dp[i][j] = (dp[i][j - coins[i - 1]] + dp[i - 1][j]) % mod;
			else
				dp[i][j] = dp[i - 1][j];
		}
	}
	cout << dp[n][x] << endl;
	return 0;
}

