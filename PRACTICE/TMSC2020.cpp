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

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int dp[50][50];
    
    for(int i=0; i<50; i++){
    	dp[i][0]=1;
	}
	
	for(int i=1; i<50; i++){
		for(int j=1; j<=i; j++){
			if(j>=1){
				dp[i][j] = dp[i][j-1];
			}
			if(i!=j){
				dp[i][j] += dp[i-1][j];
			}
		}
	}
    
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	cout << dp[n][n] << endl;
	}
    
}

