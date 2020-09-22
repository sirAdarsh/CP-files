#include<iostream>
using namespace std;

int main(){
	int arr[]={2,-3,1,121,123,3,1,2,4,123,1,2,0,12};
	
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 3;
	
	int p,q;
	// p = starting pointer
	// q is the ending pointer
	p=0;
	q=k-1;
	int max = INT_MIN;
	
	int t=0;
	
	while(q!=n){
		
		if( arr[p] > max ){
			max = arr[p];
		}
		
		p++;
		
		if( p==q && p!=n ){
			// print the max of subarray
			cout<<max<<" ";
			
			max = INT_MIN;
			p=++t;
			q++;
			
		}
		
	}
	
	
}
