#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	b:
	while(t--){
		string s;
		cin>>s;
		int arr[26]={};
		
		float size=s.size();
		float n=(size/2);
		
		for(int i=0;i<floor(n);i++){
			arr[s[i]-97]++;
		}
		
		for(int i=ceil(n);i<(int)s.size();i++){
			arr[s[i]-97]--;
		}
		int p=0;
		bool even=true;
		if(s.size()&1){
			even=false;
		}
		for(int i=0;i<26;i++){
			
			if(arr[i]!=0){
				cout<<"NO"<<endl;
				goto b;
			}
		}
		cout<<"YES"<<endl;
	}
}
