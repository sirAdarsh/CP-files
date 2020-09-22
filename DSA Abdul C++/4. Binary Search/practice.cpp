//programming binary search using iterative method
#include<iostream>
using namespace std;

//void iterBinSearch(int arr[],int size,int key){
//	
//	int l,h;
//	int mid;
//	l=0;
//	h=size-1;
//	
//	while(l<=h){
//		mid=(l+h)/2;
//		if(arr[mid]==key){
//			cout<<key<<" found";
//			return;
//		}
//		if(arr[mid] < key){
//			l=mid+1;
//		}
//		if(arr[mid > key]){
//			h=mid-1;
//		}
//		
//	}
//	cout<<key<<" not found";
//	
//}

void recBinSearch(int arr[],int size,int key,int l,int h){
	
	int mid=(l+h)/2;
	
	if(l>h){
		cout<<key<<" not found";
		return;
	}
	if(arr[mid]==key){
		cout<<key<<" found";
		return;
	}
	if(arr[mid]>key){
		recBinSearch(arr,size,key,l,mid-1);
	}
	if(arr[mid]<key){
		recBinSearch(arr,size,key,mid+1,h);
	}
	
}


int main(){
	int arr[10]={3,6,2,5,88,3,21,3,80,22};
	recBinSearch(arr,10,22,0,9);
}
