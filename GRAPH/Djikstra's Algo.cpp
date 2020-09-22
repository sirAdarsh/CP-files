#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n;
	cin >> n;
	int arr[n];
	int sum = 0;
	for(int i=0;i<n;i++){
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr,arr+n);
	sum += arr[n-1];
	cout<<sum<<endl;
}
