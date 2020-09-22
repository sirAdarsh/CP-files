#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >>t;
    while(t--){
    	
    	int n,m;
    	cin >> n >> m;
    	int arr[n][m];
    	
    	for(int i=0; i<n; i++){
    		for(int j=0; j<m; j++){
    			cin >> arr[i][j];
			}
		}
		
		int dp[n][m];
		
		for(int i=0; i<n; i++){
			dp[i][0] = arr[i][0];
		}
		
		int ma = 0;
		
		for(int i=1; i<m; i++){
			for(int j =0; j<n; j++){
				
				int a =-1, b=-1, c=-1;
				
				if(j-1>=0){
					a = dp[j-1][i-1];
				}
				b = dp[j][i-1];
				if(j+1<n){
					c = dp[j+1][i-1];
				}
				dp[j][i] = max(max(a,b),c) + arr[j][i];
				if(dp[j][i] > ma){
					ma= dp[j][i];
				}
			}
		}
    	cout<<ma<<endl;
	}
    
}

