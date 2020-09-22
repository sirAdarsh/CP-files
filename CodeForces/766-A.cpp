#include<iostream>
using namespace std;
int main(){
	string s1,s2;
	cin >> s1 >> s2;
	
	int g=s1.size();
	if(s2.size()>g){
		g=s2.size();
	}	
	s1.resize(100000,'0');
	s2.resize(100000,'0');
	
	int b=-1;
	
	
		for(int i = 99999;i>=0;i--){
			if(s1[i]!=s2[i]){
				b = i;
				break;
			}
		}
		if(b!=-1)
		cout<< g <<endl;
	else{
		cout<<-1<<endl;
	}
	
}
