/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int solve(int arr[],int minIdx, int n){
	int j=0;
	int prev= arr[minIdx];
	for(int i=minIdx; i<n; i=(i+1)%n){
		if(j==n){
			break;
		}
		if(arr[i] < prev ){
			return -1;
		}
		prev=arr[i];
		j++;
	}
	return (n-minIdx)%n;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    int arr[n];
    int min,minIdx;
    for(int i=0; i<n; i++){
    	cin >> arr[i];
	}
	min=arr[n-1];
	for(int i=n-1; i>=0; i--){
		if(arr[i]<=min){
			min=arr[i];
			minIdx=i;
		}
		else{
			break;
		}
	}
    cout << solve(arr,minIdx,n);
}

