#include<bits/stdc++.h>
#define ll long long
using namespace std;
//
//ll prime[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109};
// 
//bool isPrime(ll sum)
//{
//	for(auto i:prime)
//	{
//		if(i==sum)
//			return 1;
//	}
//	return 0;
//}

bool isPrime(int a){
	
	if(a==0 || a==1){
		return false;
	}
	
	for(int i=2; i <= a/2; i++){
		if(a % i ==0)
		return false;
	}
	return true;
}


ll dp[10][80][2]; //dp[pos][sum][tight]




ll getAns( string str, int pos, ll sum, int tight ){
	
	
	// base case
	if( pos == str.size() ){
		if( isPrime(sum) ){
			return 1;
		}
		return 0;
	}
	
	if( dp[pos][sum][tight] != -1 ){
		return dp[pos][sum][tight];
	}
	
	ll res = 0;
	
	if( tight == 1 ){
		for(int i =0; i<= str[pos] - '0'; i++){
			if( i == str[pos]-'0' ){
				res += getAns(str,pos+1,sum+i,1);
			}
			else{
				res += getAns(str,pos+1, sum+i, 0);
			}
		}
	}
	
	else{
		
		for(int i=0; i<=9; i++){
			res += getAns(str,pos+1,sum+i,0);
		}
	}
	
	dp[pos][sum][tight] =res;
	
	return dp[pos][sum][tight];
	
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
    	ll a,b;
    	cin >> a >> b;
    	a--;
    	
    	string str = to_string(a);
    	memset(dp,-1,sizeof(dp));
    	ll ans1 = getAns(str,0,0,1);
    	
    	str = to_string(b);
    	memset(dp,-1,sizeof(dp));
    	ll ans2= getAns(str,0,0,1);
    	
    	cout << ans2 -ans1<<endl;
    	
	}
    
}

