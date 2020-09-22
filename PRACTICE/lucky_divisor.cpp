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
ll n;

int dp[500][20];

ll countWays(ll sum, ll pos){
	if( pos==s.size() ){
		if(sum<=0){
			return 0;
		}
		if( n%sum==0 ){
			return 1;
		}
		return 0;
	}
	
	if(dp[200+sum][pos]!=-1){
		return dp[200+sum][pos];
	}
	
	ll tmp;
	tmp = countWays(sum+(s[pos]-'0'),pos+1);
	tmp += countWays(sum-(s[pos]-'0'),pos+1);
	return dp[200+sum][pos]=tmp;
	
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> n;
    s = to_string(n);
    memset(dp,-1,sizeof(dp));
    cout << countWays(0,0);
    
}

