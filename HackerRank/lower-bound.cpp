#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n;
	cin >> n;
	vector<int> v;
	int h;
	for(int i=0;i<n;i++){
		cin >> h;
		v.push_back(h);
	}
	
	int q;
	cin >> q;
	while(q--){
		
		int p;
		cin >>p;
		
		auto index = lower_bound(v.begin(),v.end(),p);
		if(*index == p){
			cout<<"Yes ";
		}else{
			cout<<"No ";
		}
		cout<<(index-v.begin()+1)<<endl;
		
	}
	
	
}
