/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int solve(vector<vector<int>> grid){
	
	//m*n
	
	int m = grid.size();
	int n = grid[0].size();
	
	int dp[m][n];  //stores the mimnimized cost to reach i,j
	
	dp[0][0]=grid[0][0];
	for(int i=1; i<n; i++){
		dp[0][i] = grid[0][i] + dp[0][i-1];
	}
	for(int i=1; i<m; i++){
		dp[i][0] = grid[i][0] + dp[i-1][0];
	}
	
	for(int i=1; i<m; i++){
		for(int j=1; j<n; j++){
			dp[i][j] = min( grid[i][j] + dp[i-1][j], grid[i][j]+dp[i][j-1] );
		}
	}
	return dp[m-1][n-1];
	
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    vector<vector<int>> grid = { {1,3,1},{1,5,1},{4,2,1}};
    cout <<  solve(grid);
    
}

