#include<iostream>
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
		int sum=0;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;i<n;i++){
				sum=sum+ (arr[i]*arr[j]);
			}
		}
		cout<<sum<<endl;
	}
}
