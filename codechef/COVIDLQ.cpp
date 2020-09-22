#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> vec;
		int in;
		bool end=true;
		for(int i=0;i<n;i++){
			cin>>in;
			if(in==1){
				vec.push_back(i);
			}
		}
		for(auto it=vec.begin();it!=vec.end();it++){
			if(it!=vec.begin()){
				if((*it) - *(it-1) < 6 ){
					cout<<"NO"<<endl;
					end=false;
					break;
				}
			}
		}
		if(end==true){
			cout<<"YES"<<endl;
		}
		
	}

}



