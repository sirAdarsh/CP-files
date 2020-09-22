/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int solve(int n){
	
	int dp[n+1];
	
	for(int i=0; i<=n; i++){
		dp[i] = 1;
	}
	
	
	for(int i=2; i<=n; i++){
		
		dp[i] = 0;
		
		for(int j=1; j<i; j++){
			
			int tmp = max( j*(i-j) , j*dp[i-j] );
			dp[i]=max(dp[i],tmp);
		}
		
	}
	
	
	return dp[n];	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    cout << solve(n)<<endl;
    
}

