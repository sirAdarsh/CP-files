#include<bits/stdc++.h>
using namespace std;
//solution usning sorting

int solve(int arr[6],int sum){
	int l=0,h=5;
	sort(arr,arr+6);
	while(l<h){
		if((arr[l]+arr[h])==sum){
			cout<<"solutions = "<<arr[l]<<" "<<arr[h]<<endl;
			l=l+1;
			h=h-1;
		}
		else if((arr[l]+arr[h])<sum){
			l=l+1;
		}
		else if((arr[l]+arr[h])>sum){
			h=h-1;
		}
	}
}

int main(){
	int arr[]={8,7,2,5,3,1};
	solve(arr,10);
}
