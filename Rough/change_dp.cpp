#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll Ways(ll Coins[], ll n, ll m) {
	vector<int> ways(m + 1, INT_MAX);
	ways[0] = 0;
	for (int i = 1; i <= m; i++) {
		for (int c = 0; c < n; c++) {
			if (i >= Coins[c]) {
				int sub_res = ways[i - Coins[c]];
				if (sub_res != INT_MAX && sub_res + 1 < ways[i])
					ways[i] = sub_res + 1;
			}
		}
	}
	return ways[m];
}
int main() {
	ll Money; 
	cin >> Money; 
	ll Coins[3] = { 1,3,4 };
	cout << Ways(Coins, 3, Money) << endl;

}
