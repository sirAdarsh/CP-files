/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int dp[1000][1000];

int solve(string s){
	
	int n = s.length();
	
	for(int i=0; i<n; i++){
		dp[i][i] = 1;
	}
	
	for(int size=2; size<=n; size++){
		
		for(int i = 0; i<n; i++){
			
			int temp_len;
			
			int j = i+size-1;
			if(j>n-1){
				dp[i][j]=0;
				continue;
			}
			
			int prev_len = max( dp[i][j-1], dp[i+1][j] );
					
			if(s[i] == s[j]){
				if(size!=2){
					temp_len = 2 + dp[i+1][j-1];
				}
				else{
					temp_len = 2;
				}
				
			}	
			else{
				temp_len = prev_len;
			}
			dp[i][j] = temp_len;
			
//			cout << " i ="<<i<<" j = "<<j<<endl;
			
//			cout <<"temp_len = "<< temp_len<<endl;
//			getchar();
		}
	}
	
	return dp[0][n-1];
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    string s;
    cin >> s;
    memset(dp,-1,sizeof(dp));
    int n = s.length();
    cout << solve(s);
}

