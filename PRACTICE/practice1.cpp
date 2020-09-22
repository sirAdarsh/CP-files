/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000009
using namespace std;

int dp[100];

int ways( int stair, int n, int m ){
	
	if( stair > n ){
		return 0;
	}
	if( stair == n ){
		return 1;
	}
	
	if(dp[stair]!=-1){
		return dp[stair];
	}
	
	int way = 0;
	
	for(int i=1; i<=m; i++){
		way += ways( stair + i, n, m );
	}
	
	return dp[stair]=way;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n,m;
    cin >> n >> m;
    memset(dp,-1,sizeof(dp));
    cout << ways(0,n,m);
}

