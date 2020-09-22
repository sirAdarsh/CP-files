/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int dp[100][100];  // dp[sum][chance]


int ways(int chance, int sumHere, int n, int k, int sum){
	
	if(chance == n){
		if( sumHere == sum ){
			return 1;
		}
		else return 0;
	}
	
	if(dp[sumHere][chance]!=-1){
		return dp[sumHere][chance];
	}
	
	int ch = 0;
	
	for(int i=1; i<=k; i++){
		ch += ways( chance+1, sumHere+i, n, k, sum );
	}
	
	return dp[sumHere][chance] = ch;
		
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n,k,sum;
    cin >> n >> k >> sum;
    memset(dp,-1,sizeof(dp));
    cout << ways(0,0,n,k,sum);
    
}

