#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,q;
		cin >> n >> q;
		
		ll sumOfDiff = 0;
		
		ll last = 0;
		
		ll tSum=0;
		
		for(int i=0;i<q;i++){
			
			ll a , b;
			cin >> a >> b;
			
			sumOfDiff += abs(last-a);
			
			tSum += abs(b-a);
			
			last = b;
			
		}
		
		cout<< tSum+sumOfDiff <<endl;
		
	}
}
