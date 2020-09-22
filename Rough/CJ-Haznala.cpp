#include <bits/stdc++.h>
using namespace std;
struct I {
    int s, e, i;
};
bool sortbystarting(I a, I b) {
    return a.s < b.s;
}
int main() {
    cin.sync_with_stdio(false);
    cin.tie(0);
    int t, c = 0, i, n;
    cin >> t;
    string f;
    while (c++ < t) {
        cin >> n;
        bool flag = false;
        vector<I> in(n);
        int s, e, c, j;
        for (i = 0; i < n; ++i) {
            cin >> s >> e;
            in[i].s = s;
            in[i].e = e;
            in[i].i = i;
        }
        sort(in.begin(), in.end(), sortbystarting);
        vector<string> seq(n);
        seq[in[0].i] = "C";
        c = in[0].e;
        seq[in[1].i] = "J";
        j = in[1].e;
        string S;
        for (i = 2; i < n; ++i) {
            if (c <= in[i].s) {
                c = in[i].e;
                seq[in[i].i] = "C";
            }
            else if (j <= in[i].s) {
                j = in[i].e;
                seq[in[i].i] = "J";
            }
            else {
                S = "Case #" + to_string(c) + ": " + "IMPOSSIBLE\n";
                flag = true;
            }
        }
        if (!flag) {
            for (i = 0; i < n; ++i)
                S += seq[i];
            f += "Case #" + to_string(c) + ": " + S + "\n";
        }
        else
            f += S;
    }
    cout << f;
}
