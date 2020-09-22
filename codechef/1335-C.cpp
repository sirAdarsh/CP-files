#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		
		int n;
		cin >> n;
		int arr[n];
		
		unordered_map<int,int> map;
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
			map[arr[i]]++;
		}
		
		int maxOccNum=0;
		
		for(auto m=map.begin();m!=map.end();m++){
			
			if(m->second > maxOccNum){
				maxOccNum = m->second;
			}
			
		}		
//		cout<<maxOcc/
		
		int all = map.size();
		
		if( (all-1) > maxOccNum ){
			cout<<maxOccNum<<endl;
		}
		else if( (all-1) < maxOccNum ){
			
			if( (all-1)<maxOccNum-1 ){
				cout<<all<<endl;
			}
			else{
				cout<<maxOccNum-1<<endl;
			}
		}
		else{
			
			cout<<(all-1)<<endl;
			
			
		}
		
		
	}
}
