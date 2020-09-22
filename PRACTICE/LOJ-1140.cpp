// Hare Krishna

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000009
using namespace std;

ll dp[20][200][2]; //dp[pois][zeros][tight]

ll getNums(string s, int pos, int prevZeros, int tight){
	
	if( pos == s.length() ){
		return prevZeros;
	}
	
	if(dp[pos][prevZeros][tight]!=-1){
		return dp[pos][prevZeros][tight];
	}
	
	ll res =0;
	
	if(tight == 1){
		
		for(int i=0; i<=s[pos]-'0'; i++){
			
			if(i == s[pos]-'0'){
				
				if( i==0 ){
					res += getNums(s,pos+1,prevZeros+1,1);
				}
				else{
					res += getNums(s,pos+1,prevZeros,1);
				}
			}
			else{
				if( i==0 ){
					res += getNums(s,pos+1,prevZeros+1,0);
				}
				else{
					res += getNums(s,pos+1,prevZeros,0);
				}
			}
			
		}
		
		
	}
	else{
		for(int i=0; i<=9; i++){
			
			if( i==0 ){
				res += getNums(s,pos+1,prevZeros+1,0);
			}
			else{
				res += getNums(s,pos+1,prevZeros,0);
			}
			
		}
	}
	
	return dp[pos][prevZeros][tight] = res;
	
}



int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	
    	ll a, b;
    	cin >> a >> b;
    	string s;
    	a-=1;
    	s = to_string(a);
    	memset(dp,-1,sizeof(dp));
    	ll ans1 = getNums(s,0,0,1);
    	
    	s=to_string(b);
    	memset(dp,-1,sizeof(dp));
    	ll ans2 = getNums(s,0,0,1);
    	
    	cout<<ans2-ans1<<endl;
    	
	}
    
}

