/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int dp[20][2][30]; // dp[pos][tight][prev count]

int solve( string s, int pos, int tight, int count ){
	
	if( pos==s.size() ){
		return count;
	}
	
	if( dp[pos][tight][count] != -1 ){
		return dp[pos][tight][count];
	}
	
	int res = 0;
	
	if(tight){
		
		for(int i=0; i<=s[pos]-'0'; i++){
			
			if( i==s[pos]-'0' ){
				res += (i==1)? solve(s,pos+1, 1, count+1):solve(s,pos+1,1,count);
			}
			else{
				res += (i==1)? solve(s,pos+1, 0, count+1):solve(s,pos+1,0,count);
			}
		}
	}
	else{
		
		for(int i=0; i<=9; i++){
			
			res += (i==1)? solve(s,pos+1, 0, count+1):solve(s,pos+1,0,count);
		}
	}
	
	return dp[pos][tight][count] = res;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    
    string s;
    s = to_string(n);
    memset(dp,-1,sizeof(dp));
    cout << solve(s, 0, 1, 0)<<endl;
}

