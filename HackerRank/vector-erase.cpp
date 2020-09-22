#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> vec;
	for(int i=0;i<n;i++){
		int t;
		cin >> t;
		vec.push_back(t);
	}
	
	int q1,q2,q22;
	cin >> q1;
	cin >> q2 >> q22;
	
	vec.erase(vec.begin()+q1-1);
	vec.erase(vec.begin()+q2-1,vec.begin()+q22-1);
	cout<<vec.size()<<endl;
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<" ";
	}
	
}
