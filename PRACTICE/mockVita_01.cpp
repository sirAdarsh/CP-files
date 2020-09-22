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
    
    int arr[21];
    
    arr[1]=1;
    for(int i=2; i<=20; i++){
    	arr[i] = 1 + (2*arr[i-1]);
	}
	for(int i=1; i<=20; i++){
		cout<<arr[i]<<" ";
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ans;
		for(int i=1; i<=20; i++){
			if(arr[i]>=n){
				ans=i;
				break;
			}
		}
		cout<<ans<<endl;
	}
    
}

