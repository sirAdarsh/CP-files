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
	int t;
	cin >> t;
	while(t--){
		int n;
		cin>>n;
		if(n==1){
			cout<<0<<endl;
			continue;
		}
		int arr[n-1];
		for(int i=0;i<n-1;i++){
			cin>>arr[i];
		}
		solve(arr,n);
	}
}
