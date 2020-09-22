#include<bits/stdc++.h>
using namespace std;

int main(){
	 
	 set<int> s;
	 s.insert(1);
	 s.insert(2);
	 s.insert(-1);
	 s.insert(0);
	 s.insert(0);
	 
	 set<int>::iterator it;
	 for(it=s.begin();it!=s.end();it++){
//	 	cout<<*it<<" ";
	 }
	 	
	// -1 0 1 2
	auto it2=s.upper_bound(0);
	if(it2!=s.end()){
		cout<<"Found "<<*it2;
	}
	else{
		cout<<"Not Found";
	}
	
	
	
}
