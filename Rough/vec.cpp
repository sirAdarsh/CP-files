#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> vec;
	vec.push_back(2);
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(2);
	
	int size=vec.size();
	
	vec.erase(vec.begin()+(size-1));
	for(auto i :vec){
		cout<<i<<" ";
	}
	
}
