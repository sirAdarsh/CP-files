#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	while(t--){
		
		int nA;
		cin >> nA;
		
		int arr[nA];
		for(int i=0;i<nA;i++){
			cin >> arr[i];
		}
		
		int nB;
		cin >> nB;
		
		unordered_map<int,int> m;
		for(int i=0;i<nB;i++){
			int p;
			cin >> p;
			m[p]++;
		}
		
			int count;
		if(m.find(arr[0])!=m.end()){
			count=1;
		}else{
			count = 0;
		}
		
		for(int i=1;i<nA;i++){
			
			if(m.find(arr[i-1])!=m.end() && m.find(arr[i])!=m.end() ){
				continue;
			}else{
				if(m.find(arr[i])!=m.end())
				count++;
			}
			
		}
		
		cout<<count<<endl;
	}
	
}
