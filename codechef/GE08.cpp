#include<iostream>
using namespace std;

void solve(int arr[],int n){
	int XOR=0;
	for(int i=0;i<n-1;i++){
		XOR^=arr[i];
	}
	for(int i=1;i<=n;i++){
		XOR^=i;
	}
	cout<<XOR<<endl;
}
int main(){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n-1;i++){
			cin>>arr[i];
		}
		solve(arr,n);
}

