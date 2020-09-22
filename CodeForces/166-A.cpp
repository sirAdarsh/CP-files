#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> iPair;

bool comp(iPair p1,iPair p2){
		
		if( p1.first > p2.first ){
			return true;
		}
		else if(p1.first==p2.first && p1.second<p2.second){
			return true;
		}
		else{
			return false;
		}
	}

int main(){
	
	int n,k;
	cin >> n >> k;
	vector<pair<int,int>> v;
	while(n--){
		int a,b;
		cin >> a >> b;
		v.push_back(make_pair(a,b));
	}
	
	sort(v.begin(),v.end(),comp);
	
	int nums=0;
	
	for(auto i : v){
		if( i.first == v[k-1].first && i.second == v[k-1].second ){
			nums++;
		}
	}
	cout<<nums<<endl;
}

