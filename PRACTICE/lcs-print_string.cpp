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
int dp[8][8];

string X,Y;

string lcs(int i, int j){
	
	if(i==0||j==0){
		return string("");
	}
	
	if(X[i-1]==Y[j-1]){
		return lcs(i-1,j-1)+X[i-1];
	}
	else{
		if(dp[i-1][j]>dp[i][j-1]){
			return lcs(i-1,j)+X[i-1];
		}
		else{
			return lcs(i,j-1)+Y[j-1];
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> X >> Y;
    
    int szX = X.length();
    int szY = Y.length();
    
    
    memset(dp,0, sizeof(dp));
    
    for(int i=1; i<=szX; i++){
    	for(int j=1; j<=szY; j++){
    		if(X[i-1]==Y[j-1]){
    			dp[i][j]=dp[i-1][j-1]+1;
			}
			else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	
	string lcss = lcs(szX,szY);
    cout << lcss;
}

