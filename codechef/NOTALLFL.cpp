#include<bits/stdc++.h>
using namespace std;

void NotAllFl(int arr[],int n,int k){
	
	unordered_map<int,int> map;
	
	int i=0,j=0;
	int max_idl=0;
	int max_curr=0;
	
	while(i<=n && j<=n && i<=j){
		
		map[arr[j]]++;
		if(map.size() < k){
			j++;
			max_curr=j-i+1;
			if(max_curr>max_idl){
				max_idl=max_curr;
			}
		}
		else{
			i++;
		}
		
	}
	
	cout<<max_idl;
	
}
int main(){
	int arr[6]={1,1,1,2,2,1};
	NotAllFl(arr,6,2);
	
}
