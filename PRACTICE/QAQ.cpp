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

int dp[101][5];

string cmp = "QAQ";

int solve(int ptr1, int ptr2, int n){
	
	if(ptr2==3){
		return 1;
	}
	if(ptr1==n){
		return 0;
	}
	if(dp[ptr1][ptr2]!=-1){
		return dp[ptr1][ptr2];
	}
	int ans=0;
	if(s[ptr1]==cmp[ptr2]){
		ans= solve(ptr1+1, ptr2+1, n)+solve(ptr1+1,ptr2,n);
	}
	else{
		ans= solve(ptr1+1,ptr2,n);
	}
	return dp[ptr1][ptr2]=ans;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> s;
    int n = s.length();
    memset(dp,-1,sizeof(dp));
    cout << solve(0,0,n);
}

