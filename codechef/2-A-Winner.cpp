#include<bits/stdc++.h>
using namespace std;

int main(){
	
	unordered_map<string,int> umap;
	
	int round;
	cin>>round;
	string name;
	int points;
	while(round--){
		
		cin>>name;
		cin>>points;
		//searching if the name exists previously in the map
		
		if(umap.find(name)==umap.end()){
			umap[name]+=points;
		}
		else{
			umap[name]+=points;
		}
	}
//	string nameAns;
//	int highPoint=0;
//	for(auto pair:umap){
//		if(pair.second > highPoint){
//			highPoint=pair.second;
//			nameAns=pair.first;
//		}
//	}
//	cout<<nameAns<<endl;

for(auto x=umap.end();x>x.begin();x--){
	cout<<x.first<<" "<<x.second<<endl;
}
	
}
