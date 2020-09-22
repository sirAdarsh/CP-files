// finding the numberof subarrays with sum = 1;
#include<bits/stdc++.h>
using namespace std;


int numOfSubarrays(int arr[],int n){
	
	
	unordered_multimap<int,int> sums;
	int sum = 0;
	int count = 0;
	sums.insert(pair<int,int>(0,-1));
	
	for(int i=0;i<n;i++ ){
		sum += arr[i];
		
		if(sums.find(sum - 1)!=sums.end()){
			auto it = sums.find(sum- 1);
			if(it->first==(sum-1)){
				cout<< it->second<<" ";
//				count +=  ( i - ( (it -> second) +1 ) );
			}
			
		}
		sums.insert(pair<int,int>(sum,i));
	}
	return count;
	
}


int main(){
	
	int t;
	cin>>t;
	while(t--){
		
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0; i<n; i++){
			cin >> arr[i];
			
			if( arr[i] %2 ){
				arr[i] = 0;
			}else{
				if( arr[i] %4==0 ){
					arr[i] = 2;
				}else{
					arr[i] = 1;
				}
			}
			
		}
//		for(int i=0;i<n;i++){
//			cout<<arr[i]<<" ";
//		}
		cout<<numOfSubarrays(arr,n);
	}
	
	
}
