#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int ones=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='1'){
			ones++;
		}
	}
	cout<<(ones+1)<<endl;
}
