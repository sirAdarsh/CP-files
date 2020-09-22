/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000009
#define sizeArr(arr) sizeof(arr)/sizeof(arr[0])
using namespace std;

int LAS(int arr[], int n){
	
	int size_max = 1;
	int mult_here = arr[0];
	
	int size_here = 1;
	
	for(int i=1; i<n; i++){
		
		mult_here = arr[i] * arr[i-1];
		if(mult_here < 0){
			size_here ++ ;
		}
		else{
			size_here = 1;
		}
		if(size_here > size_max){
			size_max = size_here;
		}
	}
	return size_max;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int arr[] = { 1,-2,6,4,-3,2,-4,-3 };
    int n = sizeArr(arr);
    
    cout << LAS (arr, n);
    
}

