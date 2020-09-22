// Hare Krishna

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000009
using namespace std;

ll dp[20][100][100][2]; // dp[pos][prevSum][preRem][tight]
int k;

ll getCounts(string s, ll pos, ll prevSum, ll prevRem, ll tight ){
	
	if( pos == s.length() ){
		if( prevSum % k == 0 && prevRem == 0 ){
			return 1;
		}
		return 0;
	}
	
	if(dp[pos][prevSum][prevRem][tight]!=-1){
		return dp[pos][prevSum][prevRem][tight];
	}
	
	ll res =0;
	
	if(tight ==1){
		
		for(int i=0; i<=s[pos]-'0'; i++){
			
			if( i == s[pos]-'0'){
				
				res += getCounts ( s, pos+1, prevSum+i, (prevRem * 10 + i)%k, 1 );
				
			}
			else{
				res += getCounts( s, pos+1, prevSum+i, (prevRem * 10 + i)%k, 0 );
			}
		
		}
	}
	else{
		
		for(ll i=0; i<=9; i++){
			
			res += getCounts( s, pos+1, prevSum + i , (prevRem*10 + i)%k, 0);
			
		}
		
	}
	
	return dp[pos][prevSum][prevRem][tight] = res;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    ll t;
    cin >> t;
   for(ll i=1; i<=t; i++){
    	ll a,b;
    	cin >> a >> b >> k;
    	
    	a-=1;
    	string s;
    	s = to_string(a);
    	memset(dp,-1,sizeof(dp));
    	ll ans1 = getCounts(s,0,0,0,1);
    	
    	s =to_string(b);
    	memset(dp,-1,sizeof(dp));
    	ll ans2 = getCounts(s,0,0,0,1);
    	
    	cout<<"Case "<<i<<": "<<ans2-ans1<<endl;
    	
	}
    
    
}

