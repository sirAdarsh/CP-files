#include<bits/stdc++.h>
using namespace std;

void printAllSubarrays(int arr[],int n){
	
	unordered_multimap<int,int> sums;  // (sum , current index)
	int sum=0;
	sums.insert(pair<int,int>( 0,-1 ));
	
	for(int i=0;i<n;i++){
		
		sum += arr[i];
		
		if( sums.find(sum) != sums.end() ){
			
			auto it = sums.find(sum);
			
			while(it!=sums.end() && it->first==sum ){
				
				cout<<"Subarray "<< it->second+1<<" "<<i<<endl;
				it++;
			}
			
		}
		sums.insert(pair<int,int>(sum,i));
		
	}
	
	
}

int main(){
	
	int arr[]={3,4,-7,3,1,3,1,-4,-2,-2};
	int n = sizeof(arr)/sizeof(arr[0]);
	printAllSubarrays(arr,n);
}
