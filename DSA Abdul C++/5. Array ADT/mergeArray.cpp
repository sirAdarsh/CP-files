#include<iostream>
using namespace std;

void mergeArray(int arr1[],int arr2[],int n1,int n2,int *arr3){
	
	int i=0,j=0,k=0;
	while(i<n1 && j<n2){
		
		if(arr1[i]<arr2[j]){
			arr3[k]=arr1[i];
			i++;
		}
		else{
			arr3[k]=arr2[j];
			j++;
		}
		k++;
	}
	// for the remaining elements
	if(i!=n1){
		while(i<n1){
			arr3[k]=arr1[i];
			k++;
			i++;
		}
	}
	if(j!=n2){
		while(j<n2){
			arr3[k]=arr1[j];
			k++;
			j++;
		}
	}
}

int main(){
	int arr1[7]={1,3,8,16,20,22,25};
	int arr2[5]={4,10,12,22,23};
	int arr3[12];
	
	mergeArray(arr1,arr2,5,5,arr3);
	for(int i=0;i<12;i++){
		cout<<arr3[i]<<" ";
	}
}
