#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		
		int N,K;
		int arr[N];
		int count;
		int max=0;
		int curr=0;
		int kays=0;
		int nums=0;
		
		for(int i=0;i<N;i++){
			cin>>arr[i];			
		}
		
		for(int i=0;i<N;i++){
			count=1;
			
			for(int j=i+1;j<N;j++){
				
				nums++;
				
				if(arr[i]!=arr[j]){
					
					if(count++ < K){
						count++;
					}
					else{
						break;
					}
					
				}
				if(nums>max){
					max=nums;
				}
				
			}
			
		}
		cout<<max<<endl;
	}
}
