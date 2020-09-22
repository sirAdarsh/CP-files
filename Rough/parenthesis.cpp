#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll dooo(ll Operand_1, ll Operand_2, char op) {
	if (op == '*')
		return Operand_1 * Operand_2;
	else if (op == '+')
		return Operand_1 + Operand_2;
	else if (op == '-')
		return Operand_1 - Operand_2;
}

ll solve(const string &str) {
	int Len = str.size();
	int NumOfOperands = (Len + 1) / 2;

	ll Mini[NumOfOperands][NumOfOperands];
	ll Maxi[NumOfOperands][NumOfOperands];

	memset(Mini, 0, sizeof(Mini)); // initialize to 0
	memset(Maxi, 0, sizeof(Maxi)); // initialize to 0
	for (int i = 0; i < NumOfOperands; i++) {

		Mini[i][i] = stoll(str.substr(2 * i, 1));
		Maxi[i][i] = stoll(str.substr(2 * i, 1));
	}

	for (int s = 0; s < NumOfOperands - 1; s++) {
		for (int i = 0; i < NumOfOperands - s - 1; i++) {
			int j = i + s + 1;
			ll MinVal = LLONG_MAX;
			ll MaxVal = LLONG_MIN;

			for (int k = i; k < j; k++) {
				ll a = dooo(Mini[i][k], Mini[k + 1][j], str[2 * k + 1]);
				ll b = dooo(Mini[i][k], Maxi[k + 1][j], str[2 * k + 1]);
				ll c = dooo(Maxi[i][k], Mini[k + 1][j], str[2 * k + 1]);
				ll d = dooo(Maxi[i][k], Maxi[k + 1][j], str[2 * k + 1]);

				MinVal = min(MinVal, min(a, min(b, min(c, d))));
				MaxVal = max(MaxVal, max(a, max(b, max(c, d))));

			}
			Mini[i][j] = MinVal;
			Maxi[i][j] = MaxVal;
		}
	}

	return Maxi[0][NumOfOperands - 1];
}

int main() {
	string s;
	cin >> s;

	cout << solve(s) << endl;
}
