/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    s = "bbab";
    int n = s.size();
    
    int dp[n+1][n+1]; // stores the maximum length of the palindromic subsequence
    				  // between i..j
    for(int i=0; i<n; i++){
    	dp[i][i]=1;
	}
	
	for(int size=2; size<=n; size++){
		
		for(int i=0; i<n; i++){
			
			int j = i+size-1;
			if(j>=n){
				continue;
			}
			
			if(s[i]==s[j]){
				if(size==2){
					dp[i][j]=2;
				}
				else{
					dp[i][j] = dp[i+1][j-1]+2;
				}
			}
			else{
				if(size==2){
					dp[i][j]=1;
				}
				else{
					dp[i][j] = max(dp[i][j-1],dp[i+1][j]);
				}
			}
		}
		
	}
    cout << dp[0][n-1];
}

