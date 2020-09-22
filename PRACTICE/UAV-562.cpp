#include<iostream>
using namespace std;

int solve(int arr[], int m, int S){
	
	int dp[m+1][S+1];
	
	for(int i=0; i<=m; i++){
		
		for(int w=0 ;w<=S; w++){
			
			if(i==0 || w==0){
				dp[i][w]=0;
			}
			else if( arr[i-1] <= w ){
				dp[i][w] = max( dp[i-1][w] , dp[i-1][w-arr[i-1]] + arr[i-1]);
			}
			else{
				dp[i][w] = dp[i-1][w];
			}
		}
	}
	return dp[m][S];
}


int main(){
	
	int n;
	cin >> n;
	while(n--){
		
		int m;
		cin >> m;
		int arr[m];
		int sum=0;
		for(int i=0; i<m; i++){
			cin >> arr[i];
			sum+=arr[i];
		}
		int s = sum/2;
		int p=solve(arr,m,s);
		cout<<p<<endl;
		cout<< abs(sum - 2*p) <<endl;
		
	}
	
	
}

