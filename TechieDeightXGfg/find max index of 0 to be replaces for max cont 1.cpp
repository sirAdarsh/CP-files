#include<iostream>
using namespace std;

int maxIndexOfZero(int arr[],int n){
	
	int index;
	
	int indexLastZero = -1;
	int max_sum=INT_MIN;
	int currentSum=0;
	
	
	for(int i=0;i<n;i++){
		
		if(arr[i]==0){
			currentSum = i - indexLastZero;
			indexLastZero=i;
		}
		else{
			currentSum++;
		}
		
		
		if(currentSum > max_sum){
			index = indexLastZero;
			max_sum=currentSum;
		}
		
	}
	
	return index;
	
}


int main(){
	int arr[]={0,0,1,0,1,1,1,0,1,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout<<maxIndexOfZero(arr,size);
}

