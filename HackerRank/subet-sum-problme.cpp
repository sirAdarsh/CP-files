#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int arr[t];
    for(int i=0; i<t; i++){
    	cin >> arr[i];
	}
	sort(arr,arr+t,greater<int>());
	int q;
	cin >>q;
	while(q--){
		
		ll n;
		cin >> n;
		
		ll ans = 0;
		
		ll sum = 0;
		
		for(int i=0; i<t; i++){
			sum += arr[i];
			ans++;
			if(sum >= n){
				break;
			}
		}
		if(sum<n){
			cout<<-1<<endl;
		}
		else{
			cout<<ans<<endl;
		}
	}

}

