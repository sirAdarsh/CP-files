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

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> s;
    int n = s.length();
    string ss="QAQ";
    
    int dp[n+1][4];
    memset(dp,0,sizeof(dp));
    
    for(int i=1 ;i<n; i++){
    	for(int j=1; j<4; j++){
    		if(s[i-1]==ss[j-1]){
    			dp[i][j]=dp[i-1][j-1]+1;
			}
			else{
				dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
			}
		}
	}
	int ans=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<4;j++){
			cout << dp[i][j] << ' ';
		}
		cout << endl;
	}
//    cout << ans << endl;
}

