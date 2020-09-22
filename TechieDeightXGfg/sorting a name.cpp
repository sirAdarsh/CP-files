#include<iostream>
using namespace std;

int alph[27];

int main(){
	string s;
	cout<<"Enter your name : ";
	cin >> s;
	
	int c;
	for(int i=0; i<s.size(); i++){
		c = s[i];
		alph [ c - 96 ] ++;
	}
	
	for(int i=1; i<=26; i++){
		
		for(int j=0; j<alph[i]; j++){
			
			cout << (char)(i+96);
		}
	}
	
	
}
