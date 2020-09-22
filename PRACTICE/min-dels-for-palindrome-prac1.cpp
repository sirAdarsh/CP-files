/*----- || Hare Krishna || -----*/

// IT TAKES TIME, DON'T FORGET WHO YOU ARE!

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;
string s;

int dp[1000][1000]; // represents min deletions when the pinters are at 
					// l ans r to make the s[l..r] a palindrome

int minDeletions(int l, int r){
	
	if(l>=r){
		return 0;
	}
	
	if(dp[l][r]!=-1){
		return dp[l][r];
	}
	
	int t;
	if(s[l]==s[r]){
		t = minDeletions(l+1,r-1);
	}
	else{
		t = 1 + min(minDeletions(l+1,r), minDeletions(l,r-1));
	}
	return dp[l][r] = t;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> s;
    int sz = s.size();
    memset(dp,-1,sizeof(dp));
    cout << minDeletions(0,sz-1);
    
}

