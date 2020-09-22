#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		
		int n, s;
		cin >> n >> s;
		
		int arr[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		
		int poss[n];
		for(int i=0;i<n;i++){
			cin >> poss[i];
		}
		
		int avlMon = 100-s;
		
			
			int minDef=INT_MAX;
			int minfrwd = INT_MAX;
			
			for(int i=0;i<n;i++){
				
				if(poss[i] ==0 ){
					
					if( arr[i] < minDef ){
						minDef = arr[i];
					}
					
				}
				if(poss[i]==1){
					if(arr[i] < minfrwd){
						minfrwd = arr[i];
					}
				}
				
			}
			int need = minfrwd+minDef;
			if(need <= avlMon ){
				cout<<"yes"<<endl;
			}else{
				cout<<"no"<<endl;
			}
	}
}
