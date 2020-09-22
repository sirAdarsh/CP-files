/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int solve(vector<vector<int>> grid){
	
	//m*n
	
	int m = grid.size();
	int n = grid[0].size();
	
	cout<<m<<" "<<n<<endl;
	
	
	int dp[m+1][n+1];
	
	if(grid[0][0]!=0){
		dp[0][0]=0;
	}
	else{
		dp[0][0]=1;
	}
	
	for(int i=1; i<n; i++){
		if(grid[0][i]==0){
			dp[0][i]=dp[0][i-1];
		}
		else{
			dp[0][i]=0;
		}
	}
	for(int i=1; i<m ; i++){
		if(grid[i][0]==0){
			dp[i][0]=dp[i-1][0];
		}
		else{
			dp[i][0]=0;
		}
	}
	
	for(int i=1; i<m; i++){
		
		for(int j=1; j<n; j++){
			if(grid[i][j]==1){
				dp[i][j]=0;
			}
			else{
				int ways=0;
				ways += (dp[i][j-1] + dp[i-1][j]);
				dp[i][j]=ways;
			}
		}
		
	}
	
	return dp[m-1][n-1];
	
	
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    vector<vector<int>> grid = { {1,0}};
    cout <<  solve(grid);
    
}

