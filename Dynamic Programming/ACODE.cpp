/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

ll dp[5004];


ll solve(string s, ll pos){
	
	if(pos==s.size()){
		return 1;
		
	}
	if(pos>s.size()){
		return 0;
	}
	if(dp[pos]!=-1){
		return dp[pos];
	}
	
	
	
	
	ll count=0;
	
	
	if(s[pos]=='0'){
		return 0;
	}
	else
	count = solve(s,pos+1);
	
	if( pos+1 < s.size() ){
		if((s[pos]-'0')*10 + (s[pos+1]-'0') <= 26 ){
			count += solve(s,pos+2);
		}
	}
	return dp[pos]=count;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    while(1){
    	string s;
    	cin >> s;
    	if(s=="0"){
    		break;
		}
		memset(dp,-1,sizeof(dp));
    	cout << solve(s,0) << endl;
    	
	}
    
}

