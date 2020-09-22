//MULTIMAP
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	multimap <int,int> map;
	
	//insert elements in map
	
	map.insert( pair<int,int> (1,40) );
	map.insert( pair<int,int> (2,30) );
	map.insert( pair<int,int> (3,50) );
	map.insert( pair<int,int> (4,60) );
	
	//printing maultimap
	auto it = map.begin();
	for(it = map.begin();it!=map.end();it++){
		cout<< it-> first<<" "<<it->second<<endl;
	}
	
	//assigning all elements of the map to map2;
	
	multimap<int,int> map2(map.begin(),map.end());
	for(auto i = map2.begin();i!=map2.end();i++){
		cout<< i->first<<" "<<i->second<<endl;
	}
	
	
	
}
