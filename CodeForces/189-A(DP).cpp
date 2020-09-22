#include<bits/stdc++.h>
#define ll long long
using namespace std;

int solve(int n,int a,int b,int c){
	
	int dp[n+1][4];
	
	int arr[4];
	arr[1]=a; arr[2]=b; arr[3]=c;
	
	for(int i=1; i<=3; i++){
		dp[0][i] = 0;
	}
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=3; j++){
			
			if( j-1 == 0 ){
				if(i-j>=0)
				dp[i][j] = dp[i-j][j]; 
				else
				dp[i][j] = 0;
				continue;
			}
			if ( i - arr[j] > 0 ){
				dp[i][j] = max( dp[i-arr[j]][j] + 1, dp[i][j-1] );
			}
			else{
				dp[i][j] = dp[i][j-1];
			}
			
		}
	}
	return dp[n][3];
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    
    cout<<solve(n,a,b,c)<<endl;
    
}

