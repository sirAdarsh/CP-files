#include<bits/stdc++.h>
#define ll long long
using namespace std;

string solve(string s){
	
	int n = s.size();
	
	stack<char> st;
	
	
	for(int i=0; i<s.size(); i++){
		
		if(s[i] == '{'){
			st.push('{');
		}
		else if(s[i] == '['){
			st.push('[');
		}
		else if(s[i] == '('){
			st.push('(');
		}
		
		else if( s[i] == '}' ){
			if(st.size()!=0){
				if(st.top() == '{'){
					st.pop();
				}
				else{
					return "NO";
				}
			}
			else{
				return "NO";
			}
		}
		else if( s[i] == ']' ){
			if(st.size()!=0){
				if(st.top() == '['){
					st.pop();
				}
				else{
					return "NO";
				}
			}
			else{
				return "NO";
			}
			
		}
		else if( s[i] == ')' ){
			if(st.size()!=0){
				if(st.top() == '('){
					st.pop();
				}
				else{
					return "NO";
				}
			}
			else{
				return "NO";
			}
		}
		
	}
	return "YES";
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
    	string s;
    	cin >> s;
    	cout<<solve(s)<<endl;
	}
    
}

