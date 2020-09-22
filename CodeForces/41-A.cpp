#include<iostream>
using namespace std;
int main(){
	string s;
	cin >> s;
	string t;
	cin >> t;
	if(s.size()!=t.size()){
		cout<<"NO"<<endl;
	}else{
		int p = s.size();
		bool end=false;
		for(int i=0;i<p;i++){
			if( s[i] != t[p-1-i] ){
				cout<<"NO"<<endl;
				end=true;
				break;
			}
		}
		if(!end){
			cout<<"YES"<<endl;
		}
		
		
	}
}

