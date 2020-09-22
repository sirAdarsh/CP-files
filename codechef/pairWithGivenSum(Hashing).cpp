//https://www.techiedelight.com/find-pair-with-given-sum-array/

#include<bits/stdc++.h>
using namespace std;

void findPair(int arr[],int n,int sum){
	
	unordered_map<int, int> map;
	
//	for(int i=0;i<n;i++){
//			map[arr[i]]=i; 
//	}
	for(int i=0;i<n;i++){
		
		if(map.find(sum-arr[i])!=map.end()){
			
			cout<<"Pair found at index "<<i<<" and "<<map[sum-arr[i]];
			return;
		}
		map[arr[i]]=i; 
	}
	cout<<"Pair not found. "<<endl;
	
}
int main(){
	int arr[6]={8,7,2,5,3,1};
	findPair(arr,6,10);
}
