/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int solve(int length[], int price[], int L){
	
	int dp[L+1];
	
	for(int i=0; i<=L; i++){
		dp[i]=0;
	}
	
	for(int i=1; i<=L; i++){
		
		dp[i]=0;
		
		for(int j=1; j<=i; j++){
			
			dp[i] = max( dp[i], price[j-1]+dp[i-j] );
			
		}
		
	}
	return dp[L];
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int length[]={1,2,3,4,5,6,7,8};
    int price[]={1,5,8,9,10,17,17,20};
    cout << solve(length,price,4);
}

