#include<iostream>
using namespace std;
int main(){
	
	int t;
	cin>>t;
	for(int k=1;k<=t;k++){
		
		string s;
		cin>>s;
		
		int c,p;
		
		string str="";
		p=0;
		
		for(int i=0;i<s.size();i++){
			
			c= (int)s[i];
			c -= 48;
			char ch = s[i];
			
			if(c>=p){
				while( (c - p)!=0){
					str += "(";
					p++;
				}
				str += ch;
			}
			if(c<p){
				
				while( (p-c)!=0 ){
					str+= ")";
					p--;
				}
				str += ch;
				
			}
			
			
		}
		
		while(p>0){
			str += ")";
			p--;
		}
		cout<<"Case #"<<k<<": "<<str<<endl;
		
	}
	
}
