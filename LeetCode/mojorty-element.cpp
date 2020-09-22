/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int arr[]={2,2,1,1,1,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    if(arr[n/2]==arr[0]){
    	cout<<arr[0]<<endl;
	}
	else{
		cout<<arr[n-1]<<endl;
	}
    
}

