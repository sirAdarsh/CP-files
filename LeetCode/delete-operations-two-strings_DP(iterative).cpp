/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int solve(string s1, string s2){
	
	int n = s1. size();
	int m = s2.size();
	
	int dp[n+1][m+1];
	for(int i=0; i<=n; i++){
		dp[1][i]=0;
	}
	for(int i=0; i<=m; i++){
		dp[i][1]=0;
	}
	
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(s1[i-1]==s2[j-1]){
				dp[i][j] = 1+dp[i][j-1];
			}
			else{
				dp[i][j] = max( dp[i-1][j],dp[i][j-1] );
			}
			printf("%d\n",dp[i][j]);
		}
	}
	return dp[n][m];
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    string s1,s2;
    cin >> s1  >> s2;
    
	cout << solve(s1, s2) ;
    
}

