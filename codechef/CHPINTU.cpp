#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int tc;
	cin>>tc;
	while(tc-->0){
		
		int n,m;
		cin>>n>>m;
		
		int arp[n];
		int arf[n];
		
		for(int j=0;j<n;j++){
			cin>>arf[j];
		}
		for(int j=0;j<n;j++){
			cin>>arp[j];
		}
		
		unordered_map<int,int> umap;
		
		for(int i=0;i<n;i++){
			umap[ arf[i] ] +=  arp[i];
		}
		
		int M=2147483647;
		for(auto c: umap){
			if(c.second < M){
				M=c.second;
			}
		}
		cout<<M<<endl;
	}
	
}
