#include<bits/stdc++.h>
using namespace std;

void solve(string s){
	for(int i=s.size()-1; i>=0; i--){
		cout<<s[i];
	}
	cout<<" ";
}
const int size = 100000;
int main(){
    char s [size];
    scanf("%[^\n]",s);
    
	int sizeOfWords = 0;
	for(int i=0; i<size; i++){
		if(s[i]=='\0'){
			break;
		}
		sizeOfWords++;
	}
    
    string temp = "";
    for(int i=0; i<sizeOfWords; i++){
    	if(s[i]!=' '){
    		temp += s[i];
		}
		
		else{
			solve(temp);
			temp="";
		}
		if(i==sizeOfWords-1){
		    solve(temp);
		}
	}
    
}

