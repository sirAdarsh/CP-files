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

string s1,s2;
int t;

int dp[100][100];

int lcs(int pos1, int pos2){
	
	if(pos1==s1.length()||pos2==s2.length()){
		return 0;
	}
	
	if(dp[pos1][pos2]!=-1){
		return dp[pos1][pos2];
	}
	
	int ans;
	
	if(s1[pos1]==s2[pos2]){
		ans= 1+lcs(pos1+1,pos2+1);
	}
	else{
		ans= max( lcs(pos1+1,pos2), lcs(pos1,pos2+1) );
	}
	
	return dp[pos1][pos2]=ans;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> s1 >>s2;
    memset(dp,-1,sizeof(dp));
    cout << lcs(0,0);
    
}

