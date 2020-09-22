//arr = 1, 4, 2, 10, 2, 3, 1, 0, 20 
// k =4 //USING TWP POINTER WINDOW

//MAXIMUM SUM OF K ELEMENTS

#include<iostream>
using namespace std;
int main(){
	
	int arr[] = {1,4,2,10,2,3,1,0,20};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k=4;
	
	int window_sum = 0;
	
	for(int i =0;i<k;i++){
		window_sum += arr[i];
	}
	
	int sum=window_sum;
	
	for(int i=k;i<n;i++){
		
		window_sum = window_sum - arr[i-k] + arr[i];
		if(window_sum > sum){
			sum = window_sum;
		}
	}
	cout<<sum;
	
}
