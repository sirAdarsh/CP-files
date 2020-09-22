#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int T;
	cin>>T;
	while(T--){
		int n,m,k;
		cin >> n >> m >> k;
		int pem[n];
		
		for(  int i=0;i<n;i++ ){
			int arr[10]={};
			int t;
		
			unordered_map<int,int> map;
			
			for(int j=0;j<k;j++){
				cin >> t;
				map[t]++;
			}
			int min=INT_MAX;
			for(auto i : map){
				if(i.second<min){
					min=i.first;
				}
			}
			pem[i]=min;
		
		}
		for(int i=0;i<n;i++){
			if(i==0){
				cout<<pem[i];
			}else{
				cout<<" "<<pem[i];
			}
		}	cout<<endl;
	}
	
	
	
}
