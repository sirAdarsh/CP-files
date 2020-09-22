#include<iostream>
using namespace std;
int main(){
	string s;
	cin >> s;
	
	int d = 1;
	
	for(int i = 1; i<s.size(); i++){
		
		int j = i-1;
		
		if(s[i]=='u' && s[j]=='w'){
			d++;
		}		
		else if(s[i]=='n' && s[j]=='n'){
			d++;
		}
		
	}
	cout<<d<<endl;
}
