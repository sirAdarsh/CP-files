#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll dp[20][20][2]; //dp[pos][non zeros][tight]

ll solve(string str, int pos, int tight, int nonzeros){
	
	if(nonzeros>3){
		return 0;
	}
	
	if( pos == str.size() ){
		if(nonzeros <=3){
			return 1;
		}
		return 0;
	}
	
	if(dp[pos][nonzeros][tight]!=-1){
		return dp[pos][nonzeros][tight];
	}
	
	ll res=0;
	
	if(tight == 1){ //restricted
		
		for(int i=0; i<=str[pos]-'0'; i++){
			
			
			if(i==str[pos]-'0'){
				
				if(i!=0){
					res += solve(str, pos+1, 1, nonzeros+1);
				}
				else{
					res += solve(str, pos+1, 1, nonzeros);
				}
				
			}
			else{
				if(i!=0){
					res += solve(str, pos+1, 0, nonzeros+1);
				}
				else{
					res += solve(str, pos+1, 0, nonzeros);
				}
			}
			
		}
		
	}
	else{ // unrestricted
		
		for(int i=0; i<=9; i++){
			
			if(i!=0){
				res += solve(str, pos+1, 0, nonzeros+1);
			}
			else{
				res += solve(str, pos+1, 0, nonzeros);
			}
			
		}
		
	}
	return dp[pos][nonzeros][tight] = res;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
    	ll a, b;
    	cin >> a >> b;
    	a-=1;
    	string s;
    	s=to_string(a);
    	memset(dp,-1,sizeof(dp));
    	int ans1= solve(s, 0, 1, 0);
    	s=to_string(b);
    	memset(dp,-1,sizeof(dp));
    	int ans2= solve(s, 0, 1, 0);
    	cout<<ans2-ans1<<endl;
	}
    
}

