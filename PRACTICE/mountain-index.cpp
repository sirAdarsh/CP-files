/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int solve(vector<int> arr){
	int lo=0, hi=arr.size()-1, mid;
	while(lo<=hi){
		mid = lo+(hi-lo)/2;
		if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]) return mid;
		elif(arr[mid]<arr[mid+1]) lo=mid+1;
		elif(arr[mid]>arr[mid+1]) hi=mid-1;
	}
	return -1;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    vector<int> arr = {0,2,1,0};
    cout << solve(arr);
}

