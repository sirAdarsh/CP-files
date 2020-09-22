#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={2,-1,4,-2,-2,4,1,-5,2,-4};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	unordered_set<int> sums;
	int sum=0;
	
	for(int i=0;i<n;i++){
		sum += arr[i];
		if(sum == 0 || sums.find(sum)!=sums.end() ){
			cout<<"EXISTS";	
		}
		sums.insert(sum);
	}
	
	
}
