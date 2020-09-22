#include<bits/stdc++.h>
#define ll long long
using namespace std;

int solve(int price[], int n){
	
	int val[n+1];
	
	val[0] = 0;
	
	for(int i=1; i<=n; i++){
		
		int max_price = INT_MIN;
		
		for(int j=0; j<i; j++){
			
			max_price = max ( max_price, price[j] + val[i-(j+1)]);
			
		}
		val[i] = max_price;
		
	}
	
	return val[n];
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int arr[] = {1,5,8,9,10,17,17,20};
    int size  =sizeof(arr)/sizeof(arr[0]);
    cout<<solve(arr,size);
}

