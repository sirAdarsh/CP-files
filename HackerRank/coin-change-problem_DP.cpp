#include<iostream>
using namespace std;


int solve(int arr[], int n , int m){
	
	int sols[n+1][m];
	
	for(int i=0 ; i<m; i++){
		sols[0][i] = 1;
	}
	
	for(int i=1; i<=n ; i++){
		
		for(int j=0; j<m; j++ ){
			
			if(j==0){
				
				if( arr[j] <= i )
					sols[i][j] = sols[i-arr[j]][j];
				else{
					sols[i][j] = 0;
				}
				
			}
			else{
				if( arr[j] <=i ){
					sols [i][j] = sols[i][j-1] + sols[i-arr[j]][j];
				}
				else{
					sols [i][j] = sols[i][j-1];
				}
			}
			
			
		}
		
	}	
	return sols[n][m-1];
}


int main(){
	int arr[]={1,2,3};
	int n = 4;
	int m = 3;
	cout<<solve(arr,n,m);
}
