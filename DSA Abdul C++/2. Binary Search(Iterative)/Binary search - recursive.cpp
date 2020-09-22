#include<bits/stdc++.h>
using namespce std;
int main(){
	
	int arr[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	
}
int BinarySearchR(int arr[],int l,int h,int key){
	
	int mid;
	
	if(l==h){
		if(arr[l]==key){
			return l;
		}
		else{
			return -1;
		}
	}
	mid=(l+h)/2;
	if(key<mid){
		h=mid-1;
		BinarySearchR(arr[],l,h,key);
	}
	if(key>mid){
		l=mid+1;
		BinarySearchR(aar[],l,h,key);
	}
	
}
