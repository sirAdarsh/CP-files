// Hare Krishna

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int solve(int arr[], int x, int n){
	
	int ans = -1;
	
	int l = 0, r = n-1;
	while(l<=r){
		
		int mid = l + (r-l)/2;
		
		if(arr[mid] >= x ){
			ans = arr[mid];
			r = mid - 1;
		}
		else{
			l = mid +1;
		}
		
	}
	return ans;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int arr[] = {2,3,5,6,8,10,12};
    sort(arr,arr+7);
    int n = sizeof(arr)/sizeof(arr[0]);
    
    //find first value >= x
    
    int x = 4;
    
    cout << solve(arr,4,n);
    
}

