#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll Periodic(ll m) {
	ll a = 0, b = 1, c = a + b;
	for (int i = 0; i < m*m; i++) {
		c = (a + b) % m;
		a = b;
		b = c;
		if (a == 0 && b == 1)
			return i + 1;
	}
}
int Solve(ll n, ll m) {
	long long r = n % Periodic(m);

	long long f = 0;
	long long s = 1;

	long long ans = r;

	for (int i = 1; i < r; i++) {
		ans = (f + s) % m;
		f = s;
		s = ans;
	}

	return ans % m;
}

int main() {
	ll n; 
	cin >> n;
	cout << (Solve(n + 1,10)*Solve(n,10)) % 10 << endl;
}
