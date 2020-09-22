#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	
	int a,b;
	int min = INT_MAX;
	
	for(int i=0;i<n-1;i++){
		if(abs(arr[i]-arr[i+1])<min){
			min=abs(arr[i]-arr[i+1]);
			a=i;
			b=i+1;
		}
	}
	if(abs(arr[0]-arr[n-1])<min){
		a=0;
		b=n-1;
	}
	cout<<a+1<<" "<<b+1<<endl;
	
}

