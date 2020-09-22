#include<bits/stdc++.h>
using namespace std;
int main(){
	unordered_map<int,int> map1;
	unordered_map<int,int> map2;
	int n1;
	cin>>n1;
	int arr1[n1];
	for(int i=0;i<n1;i++){
		cin>>arr1[i];
		map1[arr1[i]]++;
	}
	int n2;
	cin>>n2;
	int arr2[n2];
	for(int i=0;i<n2;i++){
		cin>>arr2[i];
		map2[arr2[i]]++;
	}
	sort(arr1,arr1+n1);
	int prev=arr1[0];
	for(int i=1;i<n1;i++){
		if(arr1[i]!=prev){
			if(map1[arr1[i]] != map2[arr2[i]] ){
				cout<<arr1[i]<<" ";
			}
		}
		prev=arr1[i];
	}
	
	
}
