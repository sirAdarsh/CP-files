#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		//reversing the array
		int temp;
		sort(arr,arr+n);
		for(int i=0;i<n/2;i++){
			temp=arr[n-1-i];
			arr[n-1-i]=arr[i];
			arr[i]=temp;
		}
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}
