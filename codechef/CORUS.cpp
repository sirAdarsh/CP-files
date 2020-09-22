#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,q;
		cin >> n >> q;
		string s;
		cin >> s;
		unordered_map<char,int> m;
		
		for(int i=0; i<s.size(); i++){
			m[s[i]]++;
		}
		
		int max=-1;
		for(auto i: m){
			if(i.second>max){
				max=i.second;
			}
		}
		while(q--){
			int c;
			cin >> c;
			
			int size=0;
			
			for(auto i : m){
				if(i.second >= c ){
					size += (i.second-c);
				}
			}
			
			if(c==0){
				cout<<n<<endl;
			}
			else{
				cout<<size<<endl;
			}
			
			
			
		}	
		
	}
}
