#include<iostream>
using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		
		int n;
		cin >> n;
		int arr[n][n];
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				int p;
				cin >> p;
				arr[i][j] = p;
			}	
		}
		
		if(n==1){
			cout<<"SAFE"<<endl;
		}else{
			
		
		
		// checking rows
		
		for(int i=0; i<n; i++){
			for(int j = 0 ; j<n-1; j++){
				if(arr[i][j+1]*arr[i][j]!=0){
					cout<<"UNSAFE"<<endl;
					goto end;
				}
			}
		}
		
			
			for(int i=0; i<n; i++){
			for(int j = 0 ; j<n-1; j++){
				if(arr[j+1][i]*arr[j][i]!=0){
					cout<<"UNSAFE"<<endl;
					goto end;
				}
			}
		}
			
		
		
			cout<<"SAFE"<<endl;
		
		
		
		end:
			{
			}
		
	}
	}
}
