// Longest Increasing subsequence
#include<iostream>
using namespace std;


int LIS(int arr[], int n){
	
	int LIS[n];
	
	for(int i=0;i<n;i++){
		LIS[i] = 1;
	}
	
	for(int i=1; i <n; i++){
		
		for(int j=0; j<i; j++){
			
			if( arr[j] < arr[i] ){
				
				LIS[i] = max(LIS[i], LIS[j]+1);
				
			}
			
		}
		
	}
	int maxLIS = INT_MIN;
	for(int i=0;i<n;i++){
		if(LIS[i]>maxLIS){
			maxLIS = LIS[i];
		}
	}
	return maxLIS;
	
}

int main(){
	int arr[]={10,22,9,33,21,50,41,60};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	cout<< LIS(arr,size);
}

