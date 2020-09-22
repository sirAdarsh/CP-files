//ways if insertion in an unordered_map
#include<bits/stdc++.h>
using namespace std;
int main(){
	unordered_map<string,int> map;
	//inserting values by using [] operator
	map["str1"]=1;
	map["str2"]=2;
	map["str3"]=3;
	
	//inserting values using isert function
	map.insert(make_pair("str4",4));
	
//	string key="str5";
//	if(map.find(key) == map.end()){
//		cout<<key<<" not found"<<endl;
//	}
//	else{
//		cout<<"Found ";
//	}

	for(auto x:map){
		cout<<x.first<<" "<<x.second<<endl;
	}
	
}
