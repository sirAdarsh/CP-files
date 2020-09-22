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

int dp[1001][1001];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    char tab[n+1][n+1];
    for(int i=1; i<=n; i++){
    	for(int j=1; j<=n; j++){
    		cin >> tab[i][j];
		}
	}
    
	if(tab[1][1]=='*'){
		cout<<0<<endl;
		return 0;
	}
	
	dp[1][1]=1;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			
			if(tab[i][j]=='*')continue;
			
			// coming from left
			if(i>1)
			(dp[i][j] += dp[i-1][j])%=MOD;
			
			// coming from up
			if(j>1)
			(dp[i][j] += dp[i][j-1])%=MOD;
		}
	}
    cout << dp[n][n];
}

