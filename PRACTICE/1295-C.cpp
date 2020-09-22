/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int solve(string s, string t){
	
	int n = s.size();
	
	int dp[n][26];
	memset(dp, -1, sizeof(dp));
	
	int lastPos[26];
	memset(lastPos,-1,sizeof(lastPos));
	
	for(int i=s.size()-1; i>=0; i--){
		
		lastPos[s[i]-97] = i;
		
		dp[i-1][s[i]-97] = lastPos[s[i]-97];
		
	}
	
	for(int i=0; i<t.size(); i++){
		if(lastPos[t[i]-97]==-1){
			return -1;
		}
	}
	
	int rolls=1;
	int pos = -1;
	
	for(int i=0; i<t.size(); i++){
		
		
		int tempPos;
		tempPos = dp[pos][t[i]-97]; 
		
		cout << "temp Pos = "<<tempPos<<endl;
		
		if(tempPos  == -1){
			pos = -1;
			rolls++;
			i--;
		} 
	}
	return rolls;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int tc;
    cin >> tc;
    while(tc--){
    	string s, t;
    	cin >> s >> t;
    	
    	cout << solve(s,t) << endl;
    	
	}
    
}

