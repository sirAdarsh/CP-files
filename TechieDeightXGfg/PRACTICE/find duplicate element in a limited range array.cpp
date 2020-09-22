#include<bits/stdc++.h>
using namespace std;

int hashingMethod(int arr[] , int n){
	
	unordered_map<int> map;
	for(int i=0;i<n;i++){
		
		if( map.find (arr[i]) != map.end() ){
			return arr[i];
		}
		map[arr[i]]++;
	}
	
}



int main(){
	int arr[] = { 1,2,3,4,4 };
	int n = sizeof(arr)/sizeof(arr[0]);
	
}
