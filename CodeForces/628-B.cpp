#include<bits/stdc++.h>
using namespace std;
#define max 300001

int dp[max];

int solve(string s,int n){
	
	int c=0;
	
	int fact = 1;
	
	for(int i=0; i<n; i++){
		
		if((s[i]-48)%4 == 0){
			c++;
		}	
	}
	
	
	
	for(int i=1; i<n; i++){
		int x;
		x = ( s[i-1]-48 ) * 10  -  ( s[i] - 48 );
		
		if( x%4 ==0){
			dp[i] = dp[i-1] + 1 + pow(2,i-1-1);
		}
		else{
			dp[i] = dp[i-1];
		}
		
		cout<<"i= "<<i<<"dp[i] = "<<dp[i]<<endl;
	}
	return dp[n-1];
	
}


int main(){
	string s;
	cin >> s;
	cout<<solve(s,s.size())<<endl;
}
