#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int arr[] = {1,-2,6,4,-3,2,-4,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int max_length = 1;
    int curr_length = 1;
    
    int lastIndex = 0;
    
    for(int i=1; i<n; i++){
    	
    	if( arr[i] * arr[i-1] < 0 ){
    		
    		curr_length ++ ;
    		if(curr_length > max_length){
    			max_length = curr_length;
    			lastIndex = i;
			}
    		
		}
    	else{
    		
    		curr_length = 1;
    		
		}
	}
	cout<<"max length = "<<max_length<<  "  ->> ";
	for(int i=0; i<max_length ; i++){
		cout<<arr[lastIndex - i]<<" ";
	}
    
}

