#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	string s;
	cin >> s;
	
	// first trying to make everyhting black
	vector<int> sols;
	for(int i=0;i<n-1;i++){
		
		if(s[i]=='W'){
			
			if(s[i+1]=='B'){
				s[i+1]='W';
			}else{
				s[i+1]='B';
			}
			s[i] = 'B';
			
			sols.push_back(i+1);
			
		}
	}
	
	if(s[n-1]!='B'){
		
		// now trying to make everuthing White
		
		for(int i=0;i<n-1;i++){
			
			if(s[i]=='B'){
				s[i]='W';
				if(s[i+1]=='B'){
					s[i+1]='W';
				}else{
					s[i+1]='B';
				}
				
				sols.push_back(i+1);
			}
		}
		
		if(s[n-1]=='W'){
			
			cout<<sols.size()<<endl;
			
			for(auto i : sols){
				cout<<i<<" ";
			}
			
		}else{
			cout<<-1<<endl;
		}
		
	}else{
		
		cout<<sols.size()<<endl;
			
			for(auto i : sols){
				cout<<i<<" ";
			}
		
	}
	
}
