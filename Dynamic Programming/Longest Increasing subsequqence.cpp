#include<iostream>
using namespace std;

int maxOfTwo(int a, int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}

int main(){
	int arr[]={10,22,9,33,21,50,41,60};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int lis[n];
	for(int i=0;i<n;i++){
		lis[i] = 1;
	}
	
	for(int i = 1; i<n ;i++){
		for(int j=0; j<i ;j++){
			if( arr[i] > arr[j] ){
				lis[i] = maxOfTwo(lis[i],lis[j]+1);  
			}
		}
	}
	int maxIndexForLis=-1;
	int max=0;
	for(int i=0;i<n;i++){
		if(lis[i] > max){
			max = lis[i];
			maxIndexForLis=i;
		}
	}
	
	cout<<lis[maxIndexForLis]<<endl;
	
}
