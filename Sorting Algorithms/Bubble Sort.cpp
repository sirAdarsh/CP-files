#include<iostream>
using namespace std;

// bubble sort

void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

int main ( ){
	
	int arr[] = { 2,7,1,4,5,2,0 };
	int n = sizeof(arr)/sizeof(arr[0]);
	
	for( int i = 0; i<n ; i++ ){
		for( int j = 0 ; j<n-1;j++ ){
			
			if(arr[j] > arr[j+1] ){
				swap(&arr[j],&arr[j+1]);
			}
			
		}
	}
	for(int i =0 ; i<n ; i++){
		cout<<arr[i]<<" ";
	}
	
	
}
