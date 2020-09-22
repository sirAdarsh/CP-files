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
int n,a,b,c;

ll maxOfThree(ll a, ll b, ll c){
	a = max(a,b);
	return max(a,c);
}

ll dp[5000];

int maxCuts(int len_rem){
	
	if(len_rem==0){
		return 0;
	}
	elif(len_rem<0){
		return LONG_MIN;
	}
	
	if(dp[len_rem]!=-1){
		return dp[len_rem];
	}
	
	int cuts;
	
	cuts = maxOfThree( 1+maxCuts(len_rem-a), 1+maxCuts(len_rem-b), 1+maxCuts(len_rem-c) );
	
	return dp[len_rem] = cuts;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    
    cin >> n >> a >> b >> c;
    memset(dp,-1,sizeof(dp));
    cout << maxCuts(n);
    
}

