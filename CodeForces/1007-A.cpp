#include<bits/stdc++.h>
using namespace std;

int solve(int arr[],int n){
	
	sort(arr,arr+n);
	int ar[n];
	for(int i=0;i<n;i++){
		ar[i]=arr[i];
	}
	int ans= 0;
	
	for(int i=0;i<n;i++){
		
		int p = arr[i];
		
		for(int j=i+1; j<n; j++){
			
			if(arr[j]>arr[i]){
				ans++;
				break;
			}	
		}
		
	}
	
	return ans;
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	cout<<solve(arr,n);
}

