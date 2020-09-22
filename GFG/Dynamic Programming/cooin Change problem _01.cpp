#include<iostream>
using namespace std;

int coinChange(int arr[], int m, int n){  //This function describes the number of ways change of coins with using first m coins of value arr, can be made with sum n
	
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	if(m<=0 && n>=1){
		return 0;
	}
	
	return coinChange(arr, m-1, n) + coinChange(arr, m, n-arr[m-1]);
	
}




int main(){
	int i,j;
	int arr[] = {1,2,3};
	int m = 3;
	cout << coinChange(arr, m, 4);
}
