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

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int mod=1e9+7;
    
    int n,x;
    cin >> n >> x;
    int c[n];
    for(int i=0; i<n; i++){
    	cin >> c[i];
	}
	vector<vector<int>> dp(n+1,vector<int>(x+1,0));
	
	dp[0][0]=1;
	
	for(int i=1; i<=n; i++){
		for(int j=0; j<=x; j++){
			
			dp[i][j] = dp[i-1][j];
			if(j-c[i-1]>=0){
				(dp[i][j]+=dp[i][j-c[i-1]])%=mod;
			}
			
		}
	}
	cout << dp[n][x];
}

