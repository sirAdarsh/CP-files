#include<bits/stdc++.h>
#define ll long long
using namespace std;

int maxOfTwo(int a, int b){
	return (a>b) ? a : b;
}

void solve(int arr[], int n){
	
	int LIS[n];
	for(int i=0; i<n; i++){
		LIS[i] = 1;
	}
	
	int max = 1, maxIndex=1;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			if(arr[j] < arr[i]){
				LIS[i] = maxOfTwo(LIS[j]+1, LIS[i]);
				if(LIS[i]>max){
					max = LIS[i];
					maxIndex = i;
				}
			}
		}
	}
	cout<<maxIndex<<endl;
	cout <<  max <<endl;
	
	
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	int arr[n];
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
		}
		solve(arr,n);
	}
    
}

