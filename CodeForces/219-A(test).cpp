#include<iostream>
using namespace std;
int main(){
	int k;
	cin>>k;
	string s;
	cin>>s;
	int arr[26]={};
	int sum=0;
	
	for(int i=0;i<s.size();i++){
		arr[s[i]-97]++;
	}
	bool end=false;
	for(int i=0;i<26;i++){
		if(arr[i]%k!=0){
			cout<<"-1"<<endl;
			end=true;
			break;
		}
	}
	if(!end){
		string str="";
		for(int i=0;i<26;i++){
			if(arr[i]!=0){
				arr[i]/=k;
				while(arr[i]--){
					str+=(char)(i+97);
				}
			}
		}
		while(k--)
		cout<<str;
		cout<<endl;
	}
	
}
