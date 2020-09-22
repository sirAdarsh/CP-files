// printing a LIS elements
#include<iostream>
using namespace std;

int maxLISsize;

void LISsize(int arr[],int n){
	
	int LIS[n];
	for(int i=0;i<n;i++){
		LIS[i] = 1;
	}
	
	for(int i = 1 ; i<n ; i++){
		for(int j = 0 ; j<i; j ++){
			
			if(arr[j]<arr[i]){
				LIS[i] = max(LIS[i], LIS[j]+1);
			}	
		}
	}
	
	int maxLIS = INT_MIN;
	for(int i=0;i<n;i++){
		if(LIS[i]>maxLIS){
			maxLIS = arr[i];
		}
	}
	
	maxLISsize = maxLIS;
	
	cout<<"size = "<<maxLISsize<<endl;
	cout<<n<<endl;
	
	int f = 1;
	
	for(int k = 0;k < n ; k++){
		
		
		cout<<"here";
		if(LIS[k]==f){
			cout<<"first element = "<<arr[k]<<endl;
			f++;
		}
		if(f>maxLISsize){
			break;
		}
		
	}
	
}



int main(){
	
	int arr[] = {10,22,9,33,21,50,41,60};
	int size = sizeof(arr)/sizeof(arr[0]);
	LISsize(arr,size);	
}
