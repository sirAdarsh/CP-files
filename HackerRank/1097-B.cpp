/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

bool solve(int arr[], int idx, int ang, int n){
	
	if(ang<0){
		ang = 360+ang;
	}
	
	if(idx==n){
		if(ang==360 || ang==0){
			return 1;
		}
		return 0;
	}
	
	bool a,b;
	a = solve(arr,idx+1, ang+arr[idx],n);
	b = solve(arr,idx+1, ang-arr[idx],n);
	
	return a|b;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
    	cin >> arr[i];
	}
    solve(arr,0,0,n)?cout<<"YES":cout<<"NO";
}

