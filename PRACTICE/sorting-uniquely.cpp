#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[] = {1,1,1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n); // 1 1 1 4 5 6
    
    int ans[n];
    int i;
    
    int j =0;
    for(i=0; i<n; i+=2 ){
    	
    	ans[i] = arr[j];
    	j++;
	}
	for(i = 1 ; i<n; i+=2){
		ans[i] = arr[j];
		j++;
	}
	for(int i=0; i<n; i++){
		cout<<ans[i]<<" ";
	}
    
}

