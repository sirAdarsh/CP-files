#include<bits/stdc++.h>
using namespace std;

int main(){
	long long N;
	cin>>N;
	long long arr[N];
	for(long long i=0;i<N;i++){
		cin>>arr[i];
	}
	
	sort(arr,arr+N);
	long long max=0;
	for(long long i=0;i<N;i++){
		if((N-i) * arr[i] > max){
			max=(N-i) * arr[i];
		}
	}
	cout<<max;
}
