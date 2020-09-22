#include<bits/stdc++.h>
using namespace std;
int main(){
	string sIn;
	cin >> sIn;
	
	string sF;
	cin >> sF;
	
	string s1="",s2="";
	
	int sz1,sz2;
	
	bool barr=false;
	for(int i=0;i<sIn.size();i++){
		if(sIn[i]=='|'){
			barr=true;
			continue;
		}
		if(!barr){
			s1+=sIn[i];
		}else{
			s2+=sIn[i];
		}
	}
	
	sz1 = s1.size();
	sz2 = s2.size();
	
	int diff = abs(sz1-sz2);
	
	int szsF = sF.size();
	
	if(szsF < diff ){
		cout<<"Impossible"<<endl;
	}
	
	else {
		
		if(s1.size()>s2.size()){
			int i;
			for( i=0;i<diff;i++){
				s2 += sF[i];
			}
			while(true){
				if(i<sF.size()){
					s1 = sF[i] + s1;
					i++;
				}
				if(i<sF.size()-1){
					s2 = s2 + sF[i];
					i++;
				}else{break;
				}
				
			}
			
			if(s1.size()==s2.size()){
				cout<<s1<<"|"<<s2<<endl;
			}else{
				cout<<"Impossible"<<endl;
			}
		}
		else if(s2.size()>s1.size()){
			int i;
			for( i=0;i<diff;i++){
				s1 += sF[i];
			}
			while(true){
				if(i<sF.size()){
					s1 = sF[i] + s1;
					i++;
				}
				if(i<sF.size()-1){
					s2 = s2 + sF[i];
					i++;
				}if(i==sF.size()-1){break;
				}
			}
			cout<<s1<<" "<<s2;
			if(s1.size()==s2.size()){
				cout<<s1<<"|"<<s2<<endl;
			}else{
				cout<<"Impossible"<<endl;
			}
			
			
		}
		else if(s1.size()==s2.size()){
			
			int i;
			for( i=0;i<diff;i++){
				s2 += sF[i];
			}
			
			while(true){
				if(i<sF.size()){
					s1 = sF[i] + s1;
					i++;
				}
				if(i<sF.size()-1){
					s2 = s2 + sF[i];
					i++;
				}else{break;
				}
				cout<<i<<endl;
				
			}
			if(s1.size()==s2.size()){
				cout<<s1<<"|"<<s2<<endl;
			}else{
				cout<<"Impossible"<<endl;
			}
			
		}else{
			cout<<"Impossible"<<endl;
		}
	}
	
	
	
}
