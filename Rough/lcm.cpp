#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b) {
	while (b) {
		ll tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

ll lcm(ll a, ll b) {
	return a / (ll)(gcd(a, b))* b;
}
int main() {
	int a, b; 
	cin >> a >> b; 
	cout << lcm(a, b) << endl;
}
