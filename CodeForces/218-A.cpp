#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin >> n >> k;
	int arr[2*n + 1];
	for(int i=0;i<(2*n+1);i++){
		cin >> arr[i];
	}
	
	for(int i = 0 ;i<(2*n);i++){
		if(i%2 && k>0 && arr[i-1]+1<arr[i] && arr[i+1]+1<arr[i] ){
			arr[i]--;
			k--;
		}
	}
	cout<<arr[0];
	for(int i=1;i<(2*n+1);i++){
		cout<<" "<<arr[i];
	}
}
