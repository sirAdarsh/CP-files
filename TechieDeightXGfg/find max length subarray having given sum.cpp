//find maximum length sub array having given sum
#include<bits/stdc++.h>
using namespace std;

void findSubarray(int arr[],int n,int num){
	
	// map to store the first appearing sum with its index
	unordered_map<int,int> sums;
	sums[0] = -1;
	int sum = 0;
	int length;
	int maxLength = 0;
	for(int i=0; i<n; i++){
		
		sum += arr[i];
		

		
		if( sums.find(sum - num ) != sums.end() ){
			auto it = sums.find(sum-num);
			length = i - ( it -> second + 1 );
			if (length > maxLength){
				maxLength = length;
			} 
		}
		sums[arr[i]] = i;
	}
	cout<< maxLength <<endl;
}


int main(){
	
	int arr[] = {5,6,-5,5,3,5,3,-2,0};
	int sum = 8;
	int n = sizeof(arr)/sizeof(arr[0]);
	findSubarray(arr,n,sum);
	
}
