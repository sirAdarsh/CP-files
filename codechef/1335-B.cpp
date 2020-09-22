#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int t;
	cin >> t;
	while(t--){
		
		int n,a,b;
		cin >> n >> a >> b;
		
		int cnt=0;
		
		string s="";
		
		for(int i=97;i<97+b;i++){
			s+=(char)i;
		}
		
		// s = abc
		int k = s.size();
//		cout<<k;
		while(s.size()!=a){
			
			for(int i=0;i<k;i++){
				if(s.size()==a){
					break;
				}
				s += s[i];
			}
			
		}
//		cout<<s;
			k=s.size();
			while(s.size()!=n){
			
			for(int i=0;i<k;i++){
				if(s.size()==n){
					break;
				}
				s += s[i];
			}
			
		}
		
		cout<<s<<endl;
		

	
}}
