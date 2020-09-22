/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int dp[100];

int solve(string s, int pos){
	
	if(pos == s.size()){
		return 1;
	}
	
	if(dp[pos]!=-1){
		return dp[pos];
	}
	
	if(s[pos]=='0'){
		return 0;
	}
	
	int ways=0;
	
	ways = solve(s,pos+1);
	
	int num;
	num = (s[pos]-'0')*10 + (s[pos+1]-'0');
//	cout<<num<<endl;
	if(pos<s.size()-1 && num <=26){
		ways+=solve(s,pos+2);
	}
	
	return dp[pos]=ways;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    string s;
    cin >> s;
    memset(dp,-1,sizeof(dp));
    cout<<solve(s,0);
    
}

