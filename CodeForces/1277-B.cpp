#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		set<int> s;
		int p;
		for(int i=0;i<n;i++){
			cin >> p;
			s.insert(p);
		}
		for(auto i = s.begin();i!=s.end();i++){
			cout<<*i<" ";
		}
		
	}
}
