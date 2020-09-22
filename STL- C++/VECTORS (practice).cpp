#include<bits/stdc++.h>
using namespace std;
int main(){
	
	vector<pair<int,int>> vec;
	
	vec.push_back({1,2});
	vec.push_back({1,2});
	vec.push_back({1,1});
	vec.push_back({2,1});
	vec.push_back({2,0});
	vec.push_back({2,1});
	
	sort(vec.begin(),vec.end());
	auto it=vec.begin();
	for(it=vec.begin();it!=vec.end();it++){
		cout<<(*it).first<<" "<<(*it).second;
		cout<<endl;
	}
	
}
