//Largest continguous subarray woth its array values
#include<iostream>
using namespace std;

void maxSumSubarray(int a[], int n){
	
	int startIndex, endIndex;
	int s = 0;
	
	int M=0 , m=0;
	
	for(int i=0;i<n;i++){
		
		m = m + a[i];
		
		if(m > M ){
			M = m;
			startIndex = s;
			endIndex = i;	
		}
		
		if(m <= 0){
			m = 0;
			s = i +1;
		}
	}
	
	cout<< " Maximum sum of subarray = "<< M;
	cout<<" with elements: "<<endl;
	for(int i=startIndex;i<=endIndex;i++){
		cout<<a[i]<<" ";
	}
	
}


int main(){
	int a[] = {2,-3,4,-1,-2,-1,5,3};
	int size = sizeof(a)/sizeof(a[0]);
	maxSumSubarray(a,size);
}
