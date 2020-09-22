#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		
		int n,k;
		cin >> n >> k;
		
		unordered_map<int,int> m;
		int p;
		int min = INT_MAX;
		int max = INT_MIN;
		vector<int> v;
		for(int i=0; i<n ; i++){
			cin >> p;
			if(m.find(p)==m.end()){
				v.push_back(p);
			}
			if(p<min){
				min = p;
			}if(p>max){
				max = p;
			}
			m[p]++;
		}
		
		if(v.size()==k){
			cout<<n*k<<endl;
			for(int i=0;i<n;i++){
				for(auto i : v){
					cout<<i<<" ";
				}
			}
			cout<<endl;
		}
		else if(m.size()>k){
			cout<<-1<<endl;
		}else{
			
			for(int i=1;i<=n;i++){
				
				if(v.size()==k){
					break;
				}
				if(m.find(i)==m.end()){
					v.push_back(i);
				}
			}
			
			if(v.size()!=k){
				cout<<-1<<endl;
			}else{
				
				cout<<n*k<<endl;
				for(int i=0;i<n;i++){
					for(auto i : v){
						cout<<i<<" ";
					}
				}
				cout<<endl;
				
			}
			
		}
		
		
	}
}
