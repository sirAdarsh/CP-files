#include<iostream>
using namespace std;

int maxSumSubarray(int a[],int n){
	
	int m=0 , M = 0;
	for(int i=0 ; i<n; i++){
		
		m = m + a[i];
		if(m<=0){
			m=0;
		}
		if(m>M){
			M = m;
		}
	}
	return M;
}


int main(){
	int a[] = {2,-3,4,-1,-2,1,5,-3};
	int size = sizeof(a)/sizeof(a[0]);
	cout<<maxSumSubarray(a,size);
}
