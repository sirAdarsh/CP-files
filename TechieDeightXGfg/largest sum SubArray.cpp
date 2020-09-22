#include<iostream>
using namespace std;

// A[]={-2,4,-1,3,2,0,-1,4,2,-1}

int largestSumSubarray(int A[],int n){
	int max_here=0;
	int max_sum=0;
	
	for(int i=0;i<n;i++){
		max_here=max_here+A[i];
		
		if(max_here<0){
			max_here=0;
		}
		if(max_here>max_sum){
			max_sum=max_here;
		}
	}
	return max_sum;
}

int main(){
	int A[]={-2, -3, 4, -1, 1, 1, 5, -3};
	cout<<largestSumSubarray(A,sizeof(A)/sizeof(A[0]));
}
