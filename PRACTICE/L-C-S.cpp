/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define pb push_back
#define pf push_front
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

int dp[1006][1006];

int solve(string s1, string s2, int idx1, int idx2){
	
	if(idx1==s1.size() || idx2==s2.size()){
		return 0;
	}
	if(dp[idx1][idx2]!=-1){
		return dp[idx1][idx2];
	}
	ll ret=0;
	if(s1[idx1]==s2[idx2]){
		ret= 1+solve(s1,s2,idx1+1,idx2+1);
	}
	else{
		ret= max(solve(s1,s2,idx1,idx2+1),solve(s1,s2,idx1+1,idx2));
	}
	return dp[idx1][idx2]=ret;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    string s1,s2;
    cin >> s1 >> s2;
    memset(dp,-1,sizeof(dp));
    cout << solve(s1,s2,0,0);
    
}

