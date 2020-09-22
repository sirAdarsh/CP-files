/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int dp[20][2005];

int solve(vector<int> vec,int S, int sum, int pos){
	
	if(pos==vec.size()){
		if(sum == S ){
			return 1;
		}
		return 0;
	}
	
	if( pos!=0 && dp[pos][1000+sum]!=-1 ){
		return dp[pos][1000+sum];
	}
	
	return dp[pos][1000+sum]=( solve(vec,S,sum+vec[pos], pos+1) + solve(vec,S,sum-vec[pos],pos+1) );
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    vector<int> nums = {1,1,1,1,1};
    memset(dp,-1,sizeof(dp));
    for(int i=0; i<=100; i++){
    	dp[0][i]=0;
	}
    cout << solve(nums,3,0,0);
    
}


