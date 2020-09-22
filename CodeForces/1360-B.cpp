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
    
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	int arr[n];
    	for(int i=0; i<n; i++) cin >> arr[i];
    	int min=INT_MAX;
    	sort(arr,arr+n);
    	for(int i=0; i<n-1; i++){
    		if(arr[i+1]-arr[i]<min){
    			min=arr[i+1]-arr[i];
			}
		}
		cout << min << endl;
	}
    
}

