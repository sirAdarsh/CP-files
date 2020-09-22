#include<bits/stdc++.h>
using namespace std;
int main(){
	unordered_map<string,int> map;
	int n;
	cin >> n;
	string s;
	while(n--){
		cin >> s;
		map[s]++;
	}
	int maxG=INT_MIN;
	string ans;
	for(auto i : map){
		if(i.second > maxG){
			ans = i.first;
			maxG = i.second;
		}
	}
	cout<<ans<<endl;
}
