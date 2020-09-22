#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int n;
	cin >> n;
	
	int ansIndex=0;
	
	int arr[n];
	double sum = 0;
	for(int i=0;i<n;i++){
		
		cin >> arr[i];
		sum += arr[i];
		
	}
	int ans= ceil(sum/2);
	
	ll s=0;
	for(int i=0;i<n;i++){
		s+=arr[i];
		if(s>=ans){
			cout<<i+1<<endl;
			break;
		}
	}
	
	
	
	
}
