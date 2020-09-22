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
	
	for(int i=0;i<26;i++){
		arr[i]/=k;
	}
	for(int i=0;i<26;i++){
		sum+=arr[i];
	}
	string ans="";
	if(sum==k){
		for(int i=0;i<26;i++){
			if(arr[i]!=0){
				ans=ans+(char)(i+97);
			}
		}
		while(k--){
			cout<<ans;
		}
	}
	else{cout<<"-1"<<endl;
	}
}
