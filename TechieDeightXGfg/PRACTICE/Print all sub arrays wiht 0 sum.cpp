// Print all subarrays with sum 0
#include<bits/stdc++.h>
using namespace std;

void printAllSubarrays(int arr[],int n){
	
	unordered_multimap<int,int> sums;
	sums.insert(pair<int,int> (0,-1));
	int sum=0;
	
	for(int i=0;i<n;i++){
		
		sum += arr[i];
		
		auto it = sums.find(sum);
		if( it != sums.end() ){
			
			while( it != sums.end() && it-> first == sum ){
				
				cout << it->second + 1 << " " << i <<endl;
				it++;
				
			}
			
		}
		sums.insert(pair<int,int> (sum,i));
		
	}
	
}


int main(){
	int arr[]={3,4,-7,3,1,3,1,-4,-2,-2};
	int n = sizeof(arr)/sizeof(arr[0]);
	printAllSubarrays(arr,n);
}
