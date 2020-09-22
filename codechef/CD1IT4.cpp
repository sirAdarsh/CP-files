#include<iostream>
using namespace std;

int arr[3001][3001];
int solve( int m, int n){
	
	// marking for the first row
	
	int dp[m+1][n+1] = {};
	
	if(arr[1][1] == -1){
		return 0;
	}
	dp[1][1] = 1;
	for(int i=2; i<=n; i++){
		
		if(arr[1][i-1]==-1){
			dp[1][i] = 0;
		}else{
			dp[1][i] = dp[1][i-1];
		}
					
	}
	
	for(int i=2; i<=m; i++){
		
		if(arr[i-1][1]==-1){
			dp[i][1] = 0;
		}else{
			dp[i][1] = dp[i-1][1];
		}
					
	}
	
	int w=0;
	
	for(int i=2; i<=m; i++){
		
		for(int j=2; j<=n; j++){
			
			if( dp[i-1][j] != -1){
				dp[i][j] += dp[i-1][j];
			}
			if(dp[i][j-1]!=-1){
				dp[i][j] += dp[i][j-1];
			}
			
		}
		
	}
	
	return dp[m][n];
	
	
}


int main(){
	int m,n,p;
	cin >> m >> n >> p;
	
	
	while(p--){
		
		int r,c;
		cin >> r >> c;
		arr[r][c] = -1;
		
	}
	
	cout<<solve(m,n);
	
}
