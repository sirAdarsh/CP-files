#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int t;
	cin>>t;
	for(int k=1;k<=t;k++){
		
		int n;
		cin>>n;
		
		int arr[n+1][n+1];
		
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>arr[j][i];
			}
		}
		// traversing in rows
		int countCols=0;
		for(int i=1;i<=n;i++){
			
			int map[101]={};
			
			for(int j=1;j<=n;j++){
				
				if( map[arr[i][j]]!=0 ){
					countCols++;
					break;
				}
				
				map[arr[i][j]]++;
				
			}
			
		}
		int countRows=0;
		for(int i=1;i<=n;i++){
			int map[101]={};
			for(int j=1;j<=n;j++){
				
				if( map[arr[j][i]]!=0 ){
					countRows++;
					break;
				}
				map[arr[j][i]]++;
			}
		}
		
		//trace
		int trace=0;
		
		for(int i=1;i<=n;i++){
			
			trace += arr[i][i];
		}
		
		
		cout<<"Case #"<<k<<":"<<trace<<" "<<countRows<<" "<<countCols<<endl;;
	}
	
}
