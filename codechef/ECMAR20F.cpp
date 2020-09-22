#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		unordered_map<char,int> map;
		int n,s;
		cin>>n>>s;
		for(int i=1;i<=n;i++){
			char a;
			cin>>a;
			if(map[a]==0){
				map[a]++;
			}
		}
		if(map.size()<s){
			cout<<s-map.size()<<endl;
		}
		else{
			cout<<"0"<<endl;
		}
	}
}
