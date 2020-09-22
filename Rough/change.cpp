#include<bits/stdc++.h>
#define ll long long
using namespace std;

using namespace std;
int main() {
	int yo; 
	cin >> yo; 
	int ans = 0; 
	ans += yo / 10; 	ans += (yo % 10) / 5; ans += ((yo % 10) % 5);
	cout << ans << endl;
}
