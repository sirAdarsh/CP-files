#include<bits/stdc++.h>
using namespace std;

int solve(int arr[6],int sum){ // solution using hashing
	unordered_map<int,int> map;
	
	for(int i=0;i<6;i++){
		if(map.find(sum-arr[i]) !=map.end() ){
			cout<<"Solution found = "<<arr[i]<<" "<<sum-arr[i]<<endl;
		}
		map[arr[i]]++;
	}
}

int main(){
	int arr[]={8,7,2,5,3,1};
	int sum=10;
	solve(arr,sum);
}
