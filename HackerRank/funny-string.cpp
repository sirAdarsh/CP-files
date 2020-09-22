#include<bits/stdc++.h>
using namespace std;
string solve(string s){
	
	string st=s;
	
	for(int i=s.size()-1 , j=0 ;i>0 , j<s.size() ; i--, j++){
		st[j]=s[i];
	}
	for(int i=0; i<s.size()-1;i++){
		if(abs(s[i+1]-s[i])!=abs(st[i+1]-st[i])){
			return "Not Funny";
		}
	}
	return "Funny";
	
}
int main(){
	string s;
	cin >> s;
	cout<<solve(s)<<endl;
}
