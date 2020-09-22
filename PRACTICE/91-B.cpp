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
    
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
    	cin >> arr[i];
	}
	int dp[n];
	dp[n-1]=arr[n-1];
	for(int i=n-2; i>0; i--){
		dp[i] = min(dp[i+1],arr[i]);
	}
	for(int i=1; i<n; i++){
		cout<<dp[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<n-1; i++){
		cout << lower_bound(dp+i+1,dp+n,arr[i])-(dp+i+2)<<" ";
	}
	cout<<-1<<endl;
    
}

