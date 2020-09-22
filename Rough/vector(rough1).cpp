#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> vec;
	vec.push_back(2);
	vec.push_back(1);
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(-1);
	vec.push_back(0);
	
	sort(vec.begin(),vec.end());
	
	auto it=upper_bound(vec.begin(),vec.end(),4);
	if(it != vec.end()){
		cout<<(*it);
	}
	else{
		cout<<"NOT FOUND";
	}
	
}
