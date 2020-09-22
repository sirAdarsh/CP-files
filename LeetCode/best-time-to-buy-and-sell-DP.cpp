#include<bits/stdc++.h>
#define ll long long
using namespace std;

int solve(vector<int> arr){
	int n = arr.size();
	int firstStock = arr[0];
	
	int maxProfit = INT_MIN;
	int profit;
	
	for(int i=1; i<n; i++){
		
		if( arr[i] - firstStock > maxProfit ){
			maxProfit = arr[i]-firstStock;
		}
		if(arr[i] < firstStock ){
			firstStock = arr[i];
		}
	}
        if(maxProfit<0){
            return 0;
        }
	return maxProfit;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> arr = {7,1,5,3,6,4};
    cout<<solve(arr);
    
}

