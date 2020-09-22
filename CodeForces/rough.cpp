#include<iostream>
using namespace std;
int main(){
	string s = "abcd";
	
//	s.erase(s.begin() + 3,s.begin()+4);
	s.resize(3);
	cout<<s;
	cout<<s.size();
}
