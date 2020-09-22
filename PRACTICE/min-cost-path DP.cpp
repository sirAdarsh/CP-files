#include<iostream>
using namespace std;

int maxOfThree(int a,int b, int c){
	a = (a>b) ? a : b;
	a = (a>c) ? a : c;
	return a;
}

int main(){
	
	int arr[3][3];
	for(int i=0;i<3;i++){
		for(int j=0; j<3; j++){
			cin >> arr[i][j];
		}
	}
	
	int dp[3][3];
	
	dp[0][0] = arr[0][0];
	
	for(int i=1; i<3; i++){
		dp[0][i] = dp[0][i-1] + arr[0][i];
		dp[i][0] = dp[i-1][0] + arr[i][0];
	}
	
	for(int i=1; i<3; i++){
		
		for(int j=1; j<3; j++){
			
				
//				if( j-1 >=0 ){
					dp[i][j] = maxOfThree ( dp[i-1][j], dp[i-1][j-1],dp[i][j-1] ) + arr[i][j];
//				}				
			
			
		}
		
	}
	cout << dp[3][3];
	
}
