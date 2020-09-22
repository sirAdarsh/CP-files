#include<bits/stdc++.h>
#define ll long long
using namespace std;
int LCS(string s1, string s2, int m, int n) {
	vector<vector<int>> ans(m + 1,vector<int>(n + 1));
	int i, j;
	for (i = 0; i <= m; i++){
		for (j = 0; j <= n; j++){
			if (i == 0 || j == 0)
				ans[i][j] = 0;

			else if (s1[i - 1] == s2[j - 1])
				ans[i][j] = ans[i - 1][j - 1] + 1;

			else
				ans[i][j] = max(ans[i - 1][j], ans[i][j - 1]);
		}
	}
	return ans[m][n];
}
int main() {
	int m, n;
	string s1 = "", s2 = "";
	cin >> m;
	int Temp;
	for (size_t i = 0; i < m; i++) {
		cin >> Temp;
		s1 += Temp;
	}
	cin >> n;
	for (size_t i = 0; i < n; i++) {
		cin >> Temp;
		s2 += Temp;
	}
	cout << LCS(s1, s2, m, n) << endl;
}
