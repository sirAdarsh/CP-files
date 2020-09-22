#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin >> n >> k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	
	int minWinSum;
	int currWinSum=0;
	for(int i=0;i<k;i++){
		currWinSum += arr[i];
	}
	minWinSum = currWinSum;
	int j = 1;
	for(int i=1;i<=n-k;i++){
		currWinSum = currWinSum - arr[i-1] + arr[i+k-1];
		if(currWinSum < minWinSum){
			j = i+1;
			minWinSum = currWinSum;
		}
	}
	cout<<j<<endl;
}
