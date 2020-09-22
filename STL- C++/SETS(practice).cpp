#include<bits/stdc++.h>
using namespace std;

int main(){
	set<pair<int,int>> s;
	
	s.insert({401,450});
	s.insert({10,20});
	s.insert({2,3});
	s.insert({30,400}); 
	
	/*(2,3)
	(10,20)
	(30,400)
	(401,450)
	*/
	
	int point = 10;
	
	auto it=s.upper_bound({point,19});
	if(it!=s.begin()){
		pair<int,int> curr= *it;
		if( curr.second>=point ){
			cout<<"Yes it is present int the range "<<curr.first<<" "<<curr.second;
		}
	}
	else{
		cout<<"Not present";
	}
	

}
