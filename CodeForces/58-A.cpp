#include<iostream>
using namespace std;
int main(){
	string s;
	cin >> s;
	
	string a="hello";
	
	int j = 0;
	bool end=false;
	int c=0;
	for(int i=0;i<s.size();i++){
		
		if( s[i] == a[j] && j<5 ){
			j++;
			c++;
			continue;
		}
		if( i == s.size()-1 && s[i]!=a[j] && j<5 ){
			cout<<"NO"<<endl;
			end=true;
			break;
		}
	}
	if(!end){
		if(c==a.size()){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	
}
