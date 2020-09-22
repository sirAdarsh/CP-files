#include<iostream>
using namespace std;

int RBinSearch(int arr[],int l,int h,int key){
	
	int mid= (l+h)/2;
	
	if(l>h){
		return -1;
	}
	
	if(arr[mid]==key){
		return mid;
	}
	else if(key>arr[mid]){
		l=mid+1;
		RBinSearch(arr,l,h,key);
	}
	else if(key<arr[mid]){
		h=mid-1;
		RBinSearch(arr,l,h,key);
	}
	
}

int main(){
	int arr[10]={1,2,5,6,8,9,12,35,56,78};
	cout<<RBinSearch(arr,0,9,12);
}
