#include<iostream>
using namespace std;

int findIndexOfKey(int key,int l,int h,int arr[]);
int main(){
	
	
	int arr[15]={1,5,8,12,14,17,25,29,36,42,47,53,55,62};
	int l,h,mid,key;
	
	l=1;
	h=14;
	key=7;
	
	cout<<findIndexOfKey(key,l,h,arr);
}
int findIndexOfKey(int key,int l,int h,int arr[]){
	int mid;
		while(l<=h){
		
		mid=(l+h)/2;
		
		if(key==arr[mid]){
			return mid;
		}
		if(key<arr[mid]){
			h=mid-1;
		}
		else{
			l=mid+1;
		}
	}	
}
