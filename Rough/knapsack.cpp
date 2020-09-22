#include<bits/stdc++.h>
#define ll long long
using namespace std;

int solve(int W, vector<int> val, vector<int> wt, int n) {
	
	vector<vector<int>>  K(n + 1,vector<int>(W + 1));
	for (int i = 0; i <= n; i++) {
		for (int w = 0; w <= W; w++) {
			if (i == 0 || w == 0)
				K[i][w] = 0;
			else if (wt[i - 1] <= w)
				K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
			else
				K[i][w] = K[i - 1][w];
		}
	}

	return K[n][W];
}

int main() {
	int n, c;
	cin >> c >> n;

	vector<int> Vals(n);
	vector<int> solvs(n);
	int t;
	for (int i = 0; i < n; i++) {
		cin >> t;
		Vals[i] = solvs[i] = t;
	}
	cout << solve(c, Vals, solvs, n) << endl;
}
