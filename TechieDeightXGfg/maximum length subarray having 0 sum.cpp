// Finding maximum length of sub array having equal number of zeros and ones

// if we write 0 as -1,  we can find the largest sub array containing 1 and -1 whose sum is zero
// as they will contain equal number of 1 ans -1

#include<bits/stdc++.h>
using namespace std;

int maxLengthSubarray(int arr[],int n){
	
	for(int i=0 ; i<n ; i++){
		if(arr[i]==0){
			arr[i]= -1;
		}
	}
	
	
	unordered_map<int,int> sums;
//	sums[0] = -1;
	int sum = 0;
	int max=-1;
	for(int i=0; i<n; i++){
		
		sum += arr[i];
		int length;
		
		auto it = sums.find(sum);
		if( it!=sums.end() && it -> first == sum  ){
			length = ( i ) - ( it -> second );
			if(length > max){
				max = length;
			}
		}
		sums [ sum ] = i;
	}
	
	return max;
	
}



int main(){
	int arr[] = {0,0,1,0,1,0,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << maxLengthSubarray(arr,n);
}
