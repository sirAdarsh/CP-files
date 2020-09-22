#include<iostream>
using namespace std;

int largestDiff(int arr[],int size){
	int max=0;
	for(int i=0;i<size-1;i++){
		
		if(arr[i+1]-arr[i]>max){
			max=arr[i+1]-arr[i];
		}
	}
	return max;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int arrF[n-1];
	
	int max=2147483647;
	
	for(int i=1;i<n-2;i++){
		
		for(int j=0;j<n-1;j++){
			
			if(j<i){
				arrF[j]=arr[i];
			}
			else{
				arrF[j]=arr[i+1];
			}
			
		}
		if(largestDiff(arrF,n-1) < max){
			max=largestDiff(arrF,n-1);
		}
	}
	for(int i=0;i<n-1;i++){
		cout<<arrF[i]<<" ";
	}
//	cout<<max<<endl;
	
}
