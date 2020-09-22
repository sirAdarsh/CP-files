#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int main(){
	
	vector<pair<int,int>> vp;
	
	int n;
	cin >> n;
	int b, d;
	for(int i=0;i<n;i++){
		cin >> b >> d;
		vp.push_back(make_pair(b,d));
				
	}
	
	ll ans = 0;
	
	for(int i=0;i<n;i++){
		ll p;
		p = abs(vp[i].second - vp[i].first )+1;
		ans += p;
	}
	
	ans = ans%MOD;
	cout<<ans<<endl;
	
	
}
