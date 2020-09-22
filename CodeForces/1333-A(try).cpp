#include<bits/stdc++.h>
using namespace std;

bool zeroSumSubarrays(int arr[],int s,int e){
	
	unordered_multimap<int,int> sums;
	sums.insert(pair<int,int>(0,-1));
	int sum=0;
	int nums=0;
	
	
	for(int i=s;i<=e;i++){
		
		sum += arr[i];
		
		if( sums.find(sum) != sums.end() ){
			
			return true;
		}
		sums.insert(pair<int,int> (sum,i));
	}
	return false;
	
}



int main(){
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	
	int s,e; //starting and ending index
	int ans = 0;
	for(int i =0 ; i<n;i++){
		
		for(int j =i; j<n ;j++){
			if( zeroSumSubarrays(arr,i,j) == false ){
				ans++;
			}
		}
		
	}
	cout<<ans<<endl;
	
	
}
