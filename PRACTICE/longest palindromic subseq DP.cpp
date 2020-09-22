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
    
    string s;
    cin >> s;
    
    int n = s.length();
    
    bool dp[n+1][n];  //dp[length][ending index]
    memset(dp,0,sizeof(dp));
    
    for(int i = 0; i<n; i++){
    	dp[1][i] = 1;
	}
    
    int max_len = 0;
    
    for(int i=2; i<n+1; i++){
    	
    	for(int j=i-1; j<n; j++){
    		
    		if( s[j] == s[j-i+1] ){
    			
    			if(i==2){
    				dp[i][j]=1;
				}
				else if( dp[i-2][j-1] !=0 ){
					dp[i][j]=1;
				}
    			
			}
    		
    		if(dp[i][j] == 1 && i >max_len ){
    			max_len = i;
			}
    		
		}
    	
	}
	cout << max_len <<endl;
    
}

