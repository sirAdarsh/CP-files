#include<bits/stdc++.h>
#define ll long long

using namespace std; 

ll MaxPairwiseProduct(vector<int> ar, int n) {
	sort(ar.begin(), ar.end()); 
	return (ll)(ar[n - 1]) * (ar[n - 2]); 
}

int main() {
	int n; 
	cin >> n; 
	vector<int> ar(n);
	for (int i = 0; i < n; i++) {
		cin >> ar[i]; 
	}
	ll ans = MaxPairwiseProduct(ar, n);
	cout << ans << endl; 
}
