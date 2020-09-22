// Find pairs with given sum in an array
#include<bits/stdc++.h>
using namespace std;

void printAllPairs(int arr[] , int n,int sum){
	
	unordered_map<int,int> map;
	for(int i=0;i<n;i++){
		int val = sum - arr[i];
		if( map.find(val) != map.end() ){
			cout<<"Pair found "<<val<<" "<<arr[i]<<endl;
		}
		map[arr[i]]++;
	}
	
}

int main(){
	
	int arr[] = {8,7,2,5,3,1};
	int sum = 10;
	printAllPairs(arr,6,sum);
}
