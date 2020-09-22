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
string t;

int dp[1000][1000];

int solve(int u, int d){
	
	// ACBCDBAA
	// AABDCBCA
	
	if(u==s.size() || d==s.size()){
		return 0;
	}
	if(dp[u][d]!=-1){
		return dp[u][d];
	}
	int p;
	if(s[u]==t[d]){
		p= 1+solve(u+1,d+1);
	}
	else{
		p= max(solve(u+1,d),solve(u,d+1));
	}
	return dp[u][d]=p;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    string s = "ACBCDBAA";
    string t = s;
	reverse(s.begin(),s.end());
    
    // s =  ACBCDBAA
    // t =  AABDCBCA
    for(int i=0; i<1000; i++){
    	for(int j=0; j<1000; j++){
    		dp[i][j]=-1;
		}
	}
    cout << solve(0,0);
    
}

