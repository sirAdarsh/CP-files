#include<iostream>
using namespace std;

void multByNeg(int arr[],int size){
	for(int i=0;i<size;i++){
		arr[i]=arr[i]*(-1);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		
		int N,K;
		cin>>N>>K;
		char ch;
		int arr[N]={};
		
		for(int i=0;i<N;i++){
			cin>>ch;
			if(ch=='H'){
				arr[i]=1;
			}
			else{
				arr[i]=-1;
			}
		}
		int lastIndex=N-1;
	
		
		for(int j=0;j<K;j++){
			if(arr[lastIndex]==1){
				multByNeg(arr,N);
			}
			arr[lastIndex]=0;
			lastIndex--;
		}
	
//	else{
//		for(int j=0;j<K;j++){
//			arr[lastIndex]=0;
//			lastIndex--;
//		}
//	}
//	for(int i=0;i<N;i++){
//		cout<<arr[i]<<" ";
//	}
		int count=0;
		//count number of heads or 1
		for(int i=0;i<N;i++){
			if(arr[i]==1){
				count++;
			}
//cout<<arr[i]<<" ";
		}
		cout<<count<<endl;
	}
}
