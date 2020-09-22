#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,k;
	cin>>n>>k;
	long arr[n];
	for(long i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	long count=0;
	for(long i=0;i<n;i++){
		long j=i+1;
		while(j<n){
			if(arr[j]-arr[i] >= k){
				break;
		 	}
			j++;
		}
		count=count+(n-j);
	}
	cout<<count<<endl;
}
