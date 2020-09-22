#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n, size; 
	cin >> n >> size;
	vector<pair<int, int>> width(n); 
	vector<pair<double,int>> vpu(n); 
	for (int i = 0; i < n; i++) {
		cin >> width[i].first >> width[i].second;
		vpu[i].first = 1.0 * width[i].first / width[i].second; 
		vpu[i].second = width[i].second;
	}
	sort(vpu.begin(), vpu.end(),greater<pair<double,int>>());
	double Res = 0;
	for (int i = 0; i < vpu.size() && size>0; i++) {
		Res += min(vpu[i].second, size)*vpu[i].first;
		size -= min(vpu[i].second, size); 
	}
	cout << fixed << setprecision(4) << Res << endl;
}
