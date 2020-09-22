#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n+1];
		int indexF1=-1;
		int indexF2=-1;
		
		int max=0;
		
		for(int i=1;i<n+1;i++){
			cin>>arr[i];
			if(arr[i]>max){
				max=arr[i];
			}
		}
		
		//indexF1
		int indexL1=0;
		int size1;
		int f=0;
		for(int i=1;i<=(n/2);i++){
			if(arr[i]==max){
				indexL1=i;
				if(indexF1==-1){
					indexF1=i;
				}
			}
		}	
		size1=indexL1-indexF1+1;	
		
		//miniimum left shift
		int minL=size1+(n/2)-indexL1;
		
		if(indexL1==0){
			minL=0;
		}
//		cout<<minL;
		
		int maxL=0;
		for(int i=n;i>=(n/2)+1;i--){
			if(arr[i]!=max){
				maxL++;
				continue;
			}
			else{
				break;
			}
		}
		if(maxL==0){
				cout<<(n/2)-size1<<endl;
		}
		else if(maxL<minL){
			cout<<0<<endl;
		}
		else{
			cout<<maxL-minL+1<<endl;
			
			
		}
		
		
	}
}
