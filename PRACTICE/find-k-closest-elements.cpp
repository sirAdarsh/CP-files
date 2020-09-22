/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

vector<int> solve(int arr[], int n, int k, int x){
	
	int lo = 0, hi = n-1;
	vector<int> ans;
	int mid;
	
	while(lo<=hi){
		
		mid = (lo+hi)/2;
		
		if(x-arr[mid]>arr[mid+k-1]-x){
			lo = mid + 1;
		}
		else{
			hi=mid-1;
		}
	}
	
	printf("%d  ",mid);
	
	for(int i=mid; i<mid+k; i++){
		ans.push_back(arr[i]);
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int arr[]= {1,2,3,4,5};
    int k=4,x=3;
    
    int n = 5;
	
	vector<int> ans = solve(arr,n,k,x);
	for(auto i : ans){
		cout << i <<" ";
	}	
    
}

