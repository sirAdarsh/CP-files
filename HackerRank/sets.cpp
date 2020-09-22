#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	set<int> s;
	while(n--){
		
		int t , p;
		cin >> t >> p;
		
		if(t==1){
			s.insert(p);
		}
		if(t==2){
			s.erase(p);
		}
		if(t==3){
			if(s.find(p)==s.end()){
				cout<<"No"<<endl;
			}else{
				cout<<"Yes"<<endl;
			}
		}
		
	}
}
