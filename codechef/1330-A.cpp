#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		
		int n,x;
		cin>>n>>x;
		set<int> s;
		int ip;
		for(int i=0;i<n;i++){
			cin>>ip;
			s.insert(ip);
		}
		
		int c = 1;
		
		auto it=s.begin();
		
		while(it!=s.end()){
			if(it == s.begin()){
				
				if(*(it) == 1){
					c=*(it);
					it++;
					continue;
				}
				else{
					if(*(it) <= x){
						x -= *(it)-1;
						x=*(it);
						it++;
						continue;
					}
				}
			}
			else{
				
				if(*(it) - c != 1){
					if(*(it)-c <= x){
						x -= *(it)-c-1;
						c=*(it);
						it++;
						continue;
					}
					else{
						break;
					}
				}
				
			}
			it++;
		}
		cout<< *(it) <<endl;
		
	}
}
