#include <bits/stdc++.h>

#define  ll long long


using namespace std;

int BinarySearch(vector<int> Arr, int n, int Target) {
	int l = 0, r = n - 1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (Arr[mid] == Target)
			return mid;
		else if (Arr[mid] < Target) {
			l = mid + 1; 
		}
		else if (Arr[mid] > Target) {
			r = mid - 1;
		}
	}
	return -1; 
}
void FindinFirst(vector<int> f, int n, vector<int> s, int k) {
	for (int i = 0; i < k; i++)
		cout << BinarySearch(f,n, s[i]) << " ";
}
int main() {
	int n; 
	cin >> n;
	vector<int> f(n); 
	for (size_t i = 0; i < n; i++)
		cin >> f[i];

	int k;
	cin >> k;
	vector<int> s(k);
	for (size_t i = 0; i < k; i++)
		cin >> s[i];

	FindinFirst(f, n, s, k);
}
