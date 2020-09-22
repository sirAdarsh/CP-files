#include<iostream>
using namespace std;

void meth(string s,string t){
	
	int arrS[200]={};
	int arrT[200]={};
	int p=0;
	for(int i =0;i <s.size();i++){
		
		if( s[i]!='#' ){
			
			arrS[p] = (int)s[i];
			p++;
			
		}
		else{
			if(p>0){
				p--;
				arrS[p] = 0;
			}
		}
	}
	
	
	p=0;
	for(int i =0;i <t.size();i++){
		
		if( t[i]!='#' ){
			
			arrT[p] = (int)t[i];
			p++;
			
		}
		else{
			if(p>0){
				p--;
				arrT[p] = 0;
			}
		}
	}
	for(int i=0;i<200;i++){
		
		if(arrS[i]!=arrT[i]){
			cout<<"false"<<endl;
			return;
		}
		
	}
	cout<<"true"<<endl;
}

int main(){
	string s,t;
	cin>>s>>t;
	meth(s,t);
}
