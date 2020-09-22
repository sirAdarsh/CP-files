#include<bits/stdc++.h>
#define ll long long
using namespace std;

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
		sort(arr,arr+n);
		int min = INT_MAX;
		for(int i=0; i<n-1; i++){
			if(arr[i+1]-arr[i] < min){
				min = arr[i+1]-arr[i];
			}
		}
		cout<<min<<endl;
    	
	}
    
}

