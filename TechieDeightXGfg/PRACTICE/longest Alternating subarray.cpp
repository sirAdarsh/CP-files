#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int arr[], int n){
	
	int curr_length = 1;
	int max_length = 1;
	
	int val = arr[0];
	
	for(int i=1; i<n; i++){
		
		if( val * arr[i] < 0 ){
			curr_length ++;
		}
		else{
			curr_length = 1;
		}
		if(curr_length > max_length ){
			max_length = curr_length;
		}
		val = arr[i-1];
		
	}
	cout<<max_length;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int arr[] = {1,-2,6,4,-3,2,-4,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
    solve(arr, n);
    
}

