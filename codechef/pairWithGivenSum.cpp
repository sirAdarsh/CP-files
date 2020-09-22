// https://www.techiedelight.com/find-pair-with-given-sum-array/

#include<bits/stdc++.h>
using namespace std;

void findPair(int arr[],int n,int sum){
	
	int l,h;
	sort(arr,arr+n);
	l=0;
	h=n-1;
	int count=0;
	while(l<h){
		
		if(sum==arr[l]+arr[h]){
			
			cout<<"pair found = "<<arr[l]<<" "<<arr[h]<<endl;
			count++;
			h=h-1;
			continue;
			
		}
		if(sum<arr[l]+arr[h]){
			h=h-1;
		}
		if(sum>arr[l]+arr[h]){
			l=l+1;
		}
	}
	
}
int main(){
	int arr[6]={8,7,2,5,3,1};
	findPair(arr,6,10);
}
