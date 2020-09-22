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
    
    int n,k;
    cin >> n >> k;
    
    int arr[n];
    
    for(int i=0; i<n; i++){
    	cin >> arr[i];
	}
	
	sort(arr,arr+n);
	
	int ans;
	
	for(int i=0; i<k/2; i++){
		ans = arr[i];
	}
	
	cout<<ans<<endl;
    
}

