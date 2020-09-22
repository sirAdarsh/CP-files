#include<bits/stdc++.h>
#define ll long long
using namespace std;

int minJumps(int ar[], int n){
	
	int dp[n];
	for(int i=0; i<n; i++){
		dp[i] = INT_MAX;
	}
	dp[0] = 0;
	for(int i=0; i<n; i++){
		
		for(int j=i+1; j<= ( i + ar[i] )  ; j++){
			if(j<n){
				if(dp[i]+ 1 < dp[j]){
					dp[j] = dp[i]+1;
				}
			}
			
		}
		
	}	
	return dp[n-1];
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int A[] = {4,2,1,0,8,1};
    int n = sizeof(A)/sizeof(A[0]);
    cout << minJumps(A,n);
}

