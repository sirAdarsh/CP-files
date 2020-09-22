#include<bits/stdc++.h>
using namespace std;



int main(){
	string s;
	cin >> s;
	
	int last = 0;
	vector<int> v;
	
	for(int i=s.size()-1; i>=0; i--){
		if(s[i]%2==0){
			last++;
		}
		v.push_back(last);		
	}
	for(int i=v.size()-1; i>=0; i--){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
