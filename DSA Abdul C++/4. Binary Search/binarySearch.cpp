#include<iostream>
using namespace std;

int iterativeBinSearch(int arr[],int key,int n){
	
	int h=n-1;
	int l=0;
	int mid;
	
	while(h>=l){
		
		mid= (l+h)/2;
		
		if(arr[mid]==key){
			return mid;
		}
		else if(key<arr[mid]){
			h=mid-1;
		}
		else{
			l=mid+1;
		}
		
	}
	return -1;
}
int main(){
	int arr[10]={2,4,6,7,9,12,45,76,87,98};
	cout<<iterativeBinSearch(arr,9,10);
}
