/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
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
    	int n,k;
    	cin >> n >> k;
    	int arr[n];
    	int sum = 0;
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
    		if(arr[i] > k){
    			sum += (arr[i]-k);
			}
		}
		cout << sum <<endl;
	}
}

