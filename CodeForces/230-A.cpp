#include<bits/stdc++.h>
using namespace std;
int main(){
	int s,n;
	cin>>s>>n;
	vector<pair<int,int>> vec;
	
	bool end=false;
	
	while(n--){
		int x,y;
		cin>>x>>y;
		vec.push_back({x,y});
	}
	sort(vec.begin(),vec.end());
	
	int bonus=0;
	
	auto it=vec.begin();
	while(it!=vec.end()){
		
		
		if(s + bonus > (*it).first ){
			bonus += (*it).second;
		}
		else{
			cout<<"NO"<<endl;
			end=true;
			break;
		}
		it++;
	}
	if(!end){
		cout<<"YES"<<endl;
	}
	
}
