/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int dp[1001][1001];

int solve(string s1, string s2, int pos1, int pos2){
	
	if( pos2==s2.size() || pos1==s1.size() ){
		
		if(pos2==s2.size()){
			return (s1.size()-pos1);
		}
		else{
			return (s2.size()-pos2);
		}
	}
	
	if(dp[pos1][pos2]!=-1){
		return dp[pos1][pos2];
	}
	
	int ops=0;
	
	if( s1[pos1]==s2[pos2] ){
		ops = solve( s1, s2, pos1+1, pos2+1);
	}
	else{
		ops = min( 1+solve(s1, s2, pos1+1, pos2), 1+solve(s1, s2, pos1, pos2+1) );
	}
	return dp[pos1][pos2]=ops;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    string s1, s2;
    cin >> s1 >> s2;
    memset(dp,-1,sizeof(dp));
    cout << solve(s1, s2, 0, 0);
}

