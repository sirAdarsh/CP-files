#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		
		ll n;
		cin >> n;
		
		if(n==1){
			cout<<-1<<endl;
			continue;
		}
		
		ll arr[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		ll prev = arr[0];
		
		ll sum =0;
//		vector<ll> nums;
		
		ll lastMax = arr[0];
		
		for(int i=1;i<n;i++){
			
			ll curr =arr[i];
			
			if( curr * prev > 0 ){
				
				if(curr > lastMax){
					lastMax = curr;
				}
				if(i==n-1){
//					nums.push_back(lastMax);
					sum += lastMax;
				}
				
			}
			
			if( curr * prev < 0){
				
//				nums.push_back(lastMax);
				sum += lastMax;
				
				lastMax = curr;
				
				if(i==n-1){
//					nums.push_back(lastMax);
					sum += lastMax;
				}
			}
			prev = curr;
			
		}
//		ll ans = 0;
//		for(auto i : nums){
//			ans += i;
//		}
		cout<<sum<<endl;
	}
}
