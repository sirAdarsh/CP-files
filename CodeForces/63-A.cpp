#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n;
	cin >> n;
	vector<string> rat;
	vector<string> womanChild;
	vector<string> men;
	vector<string> captain;
	
	string part,post;
	
	for(int i=0;i<n;i++){
		
		cin >> part >> post;
		if(post == "rat"){
			rat.push_back(part);
		}else if(post == "woman" || post == "child" ){
			womanChild.push_back(part);
		}else if(post == "man"){
			men.push_back(part);
		}else if(post == "captain"){
			captain.push_back(part);
		}
	}
	for(auto i : rat){
		cout<<i<<endl;
	}
	for(auto i : womanChild){
		cout<<i<<endl;
	}
	for(auto i : men){
		cout<<i<<endl;
	}for(auto i : captain){
		cout<<i<<endl;
	}
	
	
}
