#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin >> t;
	while(t--){
		
		string s;
		cin >> s;
		
		if(s.size()<=2){
			cout<<"YES"<<endl;
		}
		else{
			bool e =false; 
			
			for(int i=0;i<s.size()-2;i++){
			
			if( s[i] != s[i+2]){
				cout<<"NO"<<endl;
				e = true;
				break;
				}
			
			}
			
			if(!e){
				
				if(s[s.size()-2]==s[0]){
					cout<<"YES"<<endl;
				}else{
					cout<<"NO"<<endl;
				}
				
			}
		}
		
		
	}
	
}
