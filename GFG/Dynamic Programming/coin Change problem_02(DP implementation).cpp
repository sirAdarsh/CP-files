#include<iostream>
using namespace std;

int ways(int arr[], int n, int m){
	
	int sol[n+1][m];
	
	// fill the entries for n=0 as 1;
	for(int i=0; i<m ; i++){
		sol[0][i] = 1;
	}
	
	for( int i = 1; i < n+1; i++ ){
		
		for( int j=0; j < m; j++ ){
			
			int x = ( i - arr[j] >=0 ) ? sol[i-arr[j]][j] : 0;
			
			int y = ( j>=1 ) ? sol[i][j-1] : 0;
			
			sol[i][j] = x+y;
			
		}
		
	}
	
	return sol[n][m-1];
	
	
}


int main(){
	int arr[] = {2,5,3,6};
	int m = 4;
	int n = 10;
	cout<< ways(arr,n,m);
}
