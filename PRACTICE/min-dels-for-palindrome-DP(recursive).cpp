/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int dp[1000][1000];

int minDels(int l, int r){
	
	if(l>=r){
		return 0;
	}
	
	if(dp[l][r]!=-1){
		return dp[l][r];
	}
	
	if(s[l]==s[r]){
		return minDels(l+1,r-1);
	}
	else{
		return 1+min(minDels(l+1,r),minDels(l,r-1));
	}
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> s;
    memset(dp,-1,sizeof(dp));
    cout << minDels(0, s.size()-1);
    
}

