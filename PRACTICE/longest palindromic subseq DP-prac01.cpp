/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s="ACBCDBAA";
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int sz = s.size();
    
    int dp[1000][1000];
    
//    for(int i=0; i<=sz; i++){
//    	dp[i][0]=0;
//    	dp[0][i]=0;
//	}
	
	for(int i=1; i<=sz; i++){
		
		for(int j=1; j<=sz; j++){
			
			if(s[i]==s[j]){
				dp[i][j] = dp[i-1][j-1] + 1;
			}
			
			else{
				dp[i][j] = max( dp[i][j-1], dp[i-1][j] );
			}
			
		}
	}
	
    cout << dp[sz][sz];
}

