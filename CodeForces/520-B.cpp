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
ll m;
ll dp[10001];
ll solve(ll n){
	if(n==m){
		return 0;
	}
	if(n<1||n>1e4){
		return INT_MAX;
	}
	if(n>m){
		return n-m;
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	dp[n]=INT_MAX;
	dp[n]=1+min(solve(2*n),solve(n-1));
	return dp[n];
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n;
    cin >> n >> m;
    memset(dp,-1,sizeof(dp));
    cout << solve(n);
}

