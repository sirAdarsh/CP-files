#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		bool firstIntFound=false;
		for(int i=s.size()-1;i>=0;i--){
			if(s[i]!=48){
				firstIntFound=true;
			}
			if(firstIntFound){
				cout<<s[i];
			}
			
		}
		cout<<endl;
	}
}
