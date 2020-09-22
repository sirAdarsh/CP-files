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
    
    int n,s;
    cin >>n>>s;
    int arr[n];
    
    for(int i=0; i<n; i++){
    	cin >> arr[i];
	}
	int ans=0;
	int mid = n/2;
	sort(arr,arr+n);
	if(arr[mid]==s){
		cout<<0<<endl;
	}
	else if( s<arr[mid] ){
		
		ans=0;
		for(int i=mid; i>=0; i--){
			if(arr[i]<=s){
				break;
			}
			ans += (arr[i]-s);
		}
		
	}
	else{
		ans=0;
		for(int i=mid; i<n; i++){
			if(arr[i]>=s){
				break;
			}
			ans += (s-arr[i]);
		}
	}
    cout << ans << endl;
}

