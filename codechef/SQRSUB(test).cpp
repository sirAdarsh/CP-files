#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		
		int n;
		cin>>n;
		int arr[n+1];
		for(int i=1;i<=n;i++){
			cin>>arr[i];
			if (arr[i] % 2 ==0){
				int c=0;
				while(arr[i]%2==0){
					arr[i]/=2;
					c++;
				}
				arr[i]=c;
			} 
			else{
				arr[i]=0;
			}
		}
		
		int count=0;
		
		int consZeroes=0;
		
		for(int i=n; i>0;i--){
			
			if( arr[n] == 0 ){
				
				consZeroes=1;
				int j=1;
				while(arr[n-j]==0){
					
					consZeroes++;
					j++;
					
				}
				
				count += (pow(2,consZeroes) - 1);
				
			}
			
		}
		
		
		
	}
}
