#include<iostream>
using namespace std;
int main(){
	string s;
	cin >> s;
	string ans ="";
	for(int i=0;i<s.size();i++){
		
		if(s[i] == '.'){
			ans+='0';
		}
		if(s[i] == '-'){
			if(s[i+1]=='.'){
				ans+='1';
			}else{
				ans+='2';
			}
			i++;
		}
		
	}
	cout<<ans<<endl;
	
}
