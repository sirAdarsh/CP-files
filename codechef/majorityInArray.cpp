//https://www.techiedelight.com/find-majority-element-in-an-array-boyer-moore-majority-vote-algorithm/

#include<bits/stdc++.h>
using namespace std;

int majorityElement(int arr[],int n){
	
	unordered_map<int,int> map;
	
	for(int i=0;i<n;i++){
		map[arr[i]]++;	
	}
	
	//now need to check each map pair
	// or simply we have to iterate over each map pair
	
	for(auto pair:map){
		if(pair.second>n/2){
			return pair.first;
		}
	}
	
	return -1;
}

int main(){
	
	int arr[4]={1,2,3,1};
	cout<<majorityElement(arr,4);
}






