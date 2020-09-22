// UNORDERED_SET
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	unordered_set<string> set;
	
	set.insert("code");
	set.insert("in");
	set.insert("c++");
	set.insert("is");
	set.insert("fast");
	
	string key = "slow";
	
	if(set.find(key)!=set.end()){
		cout<<key<<" "<<"found";
	}else{
		cout<<key<<" not found";
	}
	key="fast";
	
	if(set.find(key)!=set.end()){
		cout<<key<<" found";
	}else{
		cout<<key<<" not found";
	}
	
	
}
