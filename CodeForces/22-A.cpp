#include<bits/stdc++.h>
using namespace std;
int main(){
	unordered_map<int,int> map;
	int n;
	cin >> n;
	vector<int> vec;
	int p;
	while(n--){
		cin >> p;
		if(map.find(p)==map.end()){
			vec.push_back(p);
		}
		map[p]++;
	}
	int size = vec.size();
	if(size==1){
		cout<<"NO"<<endl;
	}else{
		sort(vec.begin(),vec.end());
		cout<<vec[1]<<endl;
	}
}
