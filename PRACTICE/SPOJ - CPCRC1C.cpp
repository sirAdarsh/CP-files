#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll dp[10][90][2]; // dp[pos][sum][tight]

ll getSum(string str, int pos, int sum, int tight){
	
	// base case
	if( pos == str.size()){
		return sum;
	}
	
	if(dp[pos][sum][tight]!=-1){
		return dp[pos][sum][tight];
	}
	
	ll res = 0; // stores the sum
	
	if(tight == 1){
		
		for(int i=0; i<=str[pos]-'0'; i++){
			
			if(i==str[pos]-'0'){
				res += getSum ( str, pos+1, sum+i, 1 );
			}
			else{
				res += getSum ( str, pos+1, sum+i, 0 );
			}
			
		}
		
	}
	else{
		
		for(int i=0; i<=9; i++){
			res += getSum(str,pos+1,sum+i,0);
		}
		
	}
	
	return dp[pos][sum][tight] = res;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>  v(22);
    bool b = (v[6]);
    cout<<(!b);
    
//    while(1){
//    	
//    	ll a,b;
//    	cin >>a >> b;
//    	
//    	if(a==-1 && b==-1){
//    		break;
//		}
//    	
//    	a-=1;
//    	string s;
//    	s = to_string(a);
//    	memset(dp,-1,sizeof(dp));
//    	ll ans1 = getSum(s,0,0,1);
//    	s = to_string(b);
//    	memset(dp,-1,sizeof(dp));
//    	ll ans2= getSum(s,0,0,1);
//    	
//    	cout<<ans2 - ans1 <<endl;
//    	
//    	
//	}
    
}

