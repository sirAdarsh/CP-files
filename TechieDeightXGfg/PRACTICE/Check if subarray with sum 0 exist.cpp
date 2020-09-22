// Check if subarray with sum 0 exist
#include<bits/stdc++.h>
using namespace std;

bool check(int arr[], int n){
	
	unordered_set<int> sums;
	int sum=0;
	sums.insert(0);
	for(int i=0; i<n; i++){
		
		sum += arr[i];
		
		auto it = sums.find(sum);
		if(it != sums.end()){
			return true;
		}
		sums.insert(sum);
	}
	
}
int main(){
	
	int arr[]={3,4,-7,3,1,3,1,-4,-2,-2};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<check(arr,n);
	
	
}
