//Program to count the number of subarrays wiht sum 0
#include<bits/stdc++.h>
using namespace std;

int num(int arr[],int n){
	
	int sum = 0;
	unordered_multimap<int,int> sums;
	sums.insert(pair<int,int> (0,-1));  //sum till current index, current index
	int count=0;
	for( int i=0 ; i < n ; i++ ){
		
		sum += arr[i];
		auto it = sums.find(sum);
		if( it != sums.end() ){
			
			while( it != sums.end() && it->first==sum ){
				
				count++;
				it++;
				
			}
			
		}
		sums.insert(pair<int,int> (sum,i) );
	}
	return count;
	
}

int main(){
	int arr[]={3,4,-7,3,1,3,1,-4,-2,-2};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << num (arr , n)<<endl;
}
