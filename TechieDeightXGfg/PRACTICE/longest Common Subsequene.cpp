/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int dp[100][100];

int solve(string s, string t, int pos1, int pos2){
	
	if( pos1==s.size() || pos2==t.size() ){
		return 0;
	}
	
	if(dp[pos1][pos2]!=-1){
		return dp[pos1][pos2];
	}
	
	int res;
	
	if( s[pos1]==t[pos2] ){
		res= 1+solve(s,t,pos1+1,pos2+1);
	}
	else{
		res= max(solve(s,t,pos1+1,pos2),solve(s,t,pos1,pos2+1));
	}
	return dp[pos1][pos2]=res;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    string s,t;
    cin >> s >> t;
    memset(dp,-1,sizeof(dp));
    
    cout << solve(s,t,0,0);
    
}

