#include<iostream>
using namespace std;

int solve(int arr[], int n){
	
	int dp[n+1][101];
	
	for(int i=1; i<= 100; i++){
		
		dp[1][i] = i;

	}
	
	
	for(int i=2; i<=n; i++ ){
		
		int max = 0;
		
		for(int j =1; j<= arr[i-1]; j++){
			
			int diff = 0;
			
			for(int k=1; k<=arr[i-2]; k++){
				
				if(abs(k - j)>diff){
					diff = abs(k-j);
				}
			}
			
			max = diff;
			
		}
		
	}
	
}


int main(){
	int B[]={1,2,3};
	int n = 3;
	cout<<solve(B,n);
}
