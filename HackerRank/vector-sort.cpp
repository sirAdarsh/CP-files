#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> vec;
	for(int i=0;i<n;i++){
		int p;
		cin >> p;
		vec.push_back(p);
	}
	sort(vec.begin(),vec.end(),greater<int>());
	while(vec.size()!=0){
		cout<<vec[vec.size()-1]<<" ";
		vec.pop_back();
	}
}
