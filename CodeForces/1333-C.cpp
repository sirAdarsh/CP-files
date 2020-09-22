#include<bits/stdc++.h>
using namespace std;

int zeroSumSubarrays(int arr[],int n){
	
	unordered_multimap<int,int> sums;
	sums.insert(pair<int,int>(0,-1));
	int sum=0;
	int nums=0;
	for(int i=0;i<n;i++){
		
		sum += arr[i];
		
		if( sums.find(sum) != sums.end() ){
//			cout<<"here";
			auto it = sums.find(sum);
			while( it!= sums.end() && it -> first == sum ){
				nums++;
				it++;
			}
		}
		sums.insert(pair<int,int> (sum,i));
	}
	return nums;
	
}


int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int zerosSubarray = zeroSumSubarrays(arr,n) ;
	int total = n * (n+1) /2;
	cout<<(total - zerosSubarray)<<endl;
}

