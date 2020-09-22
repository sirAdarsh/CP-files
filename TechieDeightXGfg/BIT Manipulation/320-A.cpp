#include<bits/stdc++.h>
using namespace std;
void solve(string s){
	for(int i=0;i<s.size();i++){
		if(s[i]!=49 && s[i]!=52){  //ASCII of 1=49, 4=52
			cout<<"NO"<<endl;
			return;
		}
	}
	if(s[0]==52){
		cout<<"NO"<<endl;
		return;
	}
	
	int fours=0;
	for(int i=0;i<s.size();i++){
		
		if(s[i]!=49){  //49=1
	 
			fours++;
			continue;
		}
		
		if(s[i]==49){
			if(fours==0 || fours==1 || fours==2){
				fours=0;
			}
			else{
				cout<<"NO"<<endl;
				return;
			}
		}
	}
	if(fours>2){
		cout<<"NO"<<endl;
		return;
	}
	else{
		cout<<"YES"<<endl;
		return;
	}
}

int main(){
	string s;
	cin>>s;
	solve(s);
	
}
