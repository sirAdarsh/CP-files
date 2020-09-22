//printing all subarrays with a givn sum 
#include<bits/stdc++.h>
using namespace std;

void printAll( int arr[] , int n , int num ){
	
	unordered_multimap<int,int> sums; //<current sum , current index>
	sums.insert(pair<int,int> (0,-1));
	
	int sum = 0;
	for(int i=0; i<n; i++){
		
		sum += arr[i];
		
		if( sums.find(sum - num ) != sums.end() ){
			
			auto it = sums.find(sum-num);
			
			while( it != sums.end() && it->first == sum-num ){
				
				cout << it-> second + 1 <<" "<< i<<endl;
				
				it++;
			}
			
		}
		sums.insert(pair<int,int> (sum , i) );
		
	}
	
	
}

int main(){
	int sum = 2;
	int arr[] = { 0,0,1,0,1,1,0,1,0 };
	int n = sizeof(arr)/sizeof(arr[0]);
	printAll(arr,n,sum);
}
