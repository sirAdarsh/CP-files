#include <bits/stdc++.h>
#define  ll long long;

using namespace std;

bool solve(vector<int> Arr, int n) {
	map<int, int> f; 
	for (size_t i = 0; i < n; i++)
		f[Arr[i]]++;

	for (int i = 0; i <n; i++)
		if (f[Arr[i]] > (n / 2))
			return true; 
	
	return false;
}
int main() {
	int p;
	cin >> p; 
	
	vector<int> arr(p); 
	for (size_t i = 0; i < p; i++)
		cin >> arr[i];
	
	cout << solve(arr, p) << endl;
}
