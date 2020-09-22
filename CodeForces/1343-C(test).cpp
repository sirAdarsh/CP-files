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
			int p;
			cin >> p;
			cout<<p<<endl;
			continue;
		}
		
		
		ll prev;
		cin >> prev;
		ll sum =0;
		ll lastMax = prev;
		
		ll inp;
		for(int i=1;i<n;i++){
			cin >> inp;
			
			ll curr =inp;
			
			if( curr * prev > 0 ){
				
				if(curr > lastMax){
					lastMax = curr;
				}
				if(i==n-1){
					sum += lastMax;
				}
				
			}
			if( curr * prev < 0){
				
				sum += lastMax;
				
				lastMax = curr;
				
				if(i==n-1){
					sum += lastMax;
				}
			}
			prev = curr;
			
			
		}
		cout<<sum<<endl;
			
		}
		
	}

