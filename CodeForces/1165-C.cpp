#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	if(n==1){
		cout<<1<<endl;
		cout<<endl;
	}else{
		
		string s2="";
		int count=0;
		for(int i=0;i<s.size()-1;i++){
			if(s[i] == s[i+1] ){
				count++;
				s2+=s[i];
			}else{
				s2+=s[i];
				s2+=s[i+1];
			}
			i++;
		}
		if(n%2){
			s2+=s[s.size()-1];
		}
		
//		if(s2.size()%2){
//			count++;
//			int sz = s2.size();
//			s2.resize(sz-1);
//		}
//		if( s2[s2.size()-1] == s2[s2.size()-2]){
//			
//			count +=2;
//			s2.resize(s2.size()-2);
//			
//		}
		cout<<count<<endl;
		cout<<s2<<endl;
		
	}
}
