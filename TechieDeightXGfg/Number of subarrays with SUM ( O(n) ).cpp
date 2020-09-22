// Program to find number of sub arrays having a given sum
#include<bits/stdc++.h>
using namespace std;

int numOfSubarrays(int arr[],int n,int sum){
	
	// map to store the number of pccuramces of current sum
	unordered_map<int,int> map;
	int currentSum = 0;
	map[0] = 1;
	int count=0;
	
	for(int i=0;i<n;i++){
		
		currentSum += arr[i];
		
		if( map.find(currentSum - sum)!=map.end() ){
			
			count += map[(currentSum-sum)];
			
		}
		
		map[currentSum]++;
	}
	
	return count;
}


int main(){
	int arr[] = {0,1,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum = 1;
	cout << numOfSubarrays(arr,n,sum);
}

