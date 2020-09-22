#include<bits/stdc++.h>
using namespace std;

string isBal(string s){
	
	stack<char> st;
	for(int i=0;i<s.size();i++){
		
		if(s[i] == '(' || s[i] == '{' || s[i] == '[' ){
			st.push(s[i]);
		}
		else{
			
			if(st.empty()){
				return "NO";
			}
			
			if(s[i]==')'){
				if(st.top()=='('){
					st.pop();
				}else{
					return "NO";
				}
			}
			if(s[i]==']'){
				if(st.top()=='['){
					st.pop();
				}else{
					return "NO";
				}
			}
			if(s[i]=='}'){
				if(st.top()=='{'){
					st.pop();
				}else{
					return "NO";
				}
			}
			
			
		}
		
	}
	
	if(!st.empty()){
		return "NO";
	}
	return "YES";
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout<<isBal(s)<<endl;
	}
	
}
