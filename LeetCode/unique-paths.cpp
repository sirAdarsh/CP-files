/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int m,n;
    cin >> m >> n;
    
    int dp[m+1][n+1];
    
    for(int i=1; i<=n; ++i){
    	dp[1][i] = 1;
	}
	for(int j = 1; j<=m; j++){
		dp[j][1] = 1;
	}
 	
 	for(int i=2;i<=m;i++){
 		for(int j=2; j<=n; j++){
 			dp[i][j] = dp[i][j-1] + dp[i-1][j];
		}
	}
	
	cout << dp[m][n]<<endl;
    
}

