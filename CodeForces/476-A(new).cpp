/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;
int n,m;

int dp[10001][600];

int solve(int steps, int ht){
	
	if(ht==n){
		if(steps%m==0){
			return steps;
		}
		else{
			return INT_MAX;
		}
	}
	else if(ht>n){
		return INT_MAX;
	}
	
	if(dp[steps][ht]!=-1){
		return dp[steps][ht];
	}
		
	int ans;
	
	ans = min( solve(steps+1, ht+1), solve(steps+1, ht+2) );
	return dp[steps][ht]=ans;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> n >> m;
    memset(dp,-1,sizeof(dp));
    int k = solve(0,0);
    if(k==INT_MAX){
    	cout << -1 << endl;
    	return 0;
	}
    cout << solve(0,0);
    
}

