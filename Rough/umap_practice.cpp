#include<bits/stdc++.h>
using namespace std;
int main(){
	unordered_map<string,int> map;
	map["Adarsh"]++;
	map["Kumar"];
	map["Sinha"];
	
	for(auto x: map){
		cout<<x.first<<" "<<x.second<<endl;
	}
}
