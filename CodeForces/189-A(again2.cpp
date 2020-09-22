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

int dp[4001];
int a,b,c;

int maxOfThree(int a, int b, int c){
	a = max(a,b);
	return max(a,c);
}

int solve(int n){
	
	if(n==0){
		return 0;
	}
	if(n<0){
		return INT_MIN;
	}
	
	if(dp[n]!=-1){
		return dp[n];
	}
	
	int maxx;
	
	maxx = maxOfThree( 1+solve(n-a), 1+solve(n-b), 1+solve(n-c) );
	dp[n] = maxx;
	return dp[n];
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
	int n;
	cin >> n >> a >> b >> c;
	memset(dp, -1, sizeof(dp));
	
    cout << solve(n);
}

