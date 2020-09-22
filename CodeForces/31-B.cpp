#include<bits/stdc++.h>
using namespace std;


vector<string> solve(string s){
	
	vector<string> ans;
	int ats=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='@'){
			ats++;
		}
	}
	string str="";
	int p=0;
	vector<string> t ={"No solution"};
	if(ats==0){
		return t;
	}
	for(int i=0;i<s.size();i++){
		
		if(s[i]!='@'){
			str+=(char)s[i];
		}else{
			if(str.size()<1){
				return t;
			}
			if(i==s.size()-1){
				return t;
			}
			p++;
			str += "@";
			if(p==ats){
				for(int j = i+1; j<s.size();j++){
					str+=(char)s[j];
				}
				ans.push_back(str);
				return ans;
			}else{
				if(s[i+1]=='@'){
					return t;
				}
				str += (char)s[i+1];
			}
			
			ans.push_back(str);
			str="";
			i++;
		}
	}
	return ans;
	
}

int main(){
	string s;
	cin >> s;
	
	vector<string> ans = solve(s);
	cout<<ans[0];
	for(int i=1;i<ans.size();i++){
		cout<<","<<ans[i];
	}
	
}
