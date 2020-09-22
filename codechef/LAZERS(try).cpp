#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		
		int N,Q;
		cin>>N>>Q;
		int arr[N];
		for(int i=1;i<=N;i++){
			cin>>arr[i];
		}
		int x1,x2,y;
		while(Q--){
			int count=0;
			cin>>x1>>x2>>y;
			
			int pos=0,initPos=0;
			
			for(int i=x1;i<=x2;i++){
				
				if(i==x1){
					
					if(arr[i] == y ){
					count++;
				}
				else if(y > arr[i]){
					initPos=1;
				}
				else if(y < arr[i]){
					initPos=-1;
				}
				continue;
				}
				else{
					if(y > arr[i]){
					pos=1;
				}
				else if(y < arr[i]){
					pos=-1;
				}
				else if(y == arr[i]){
					count++;
					continue;
				}
				
				if(initPos * pos <0){
					count++;
				}
				initPos=pos;
				}
				
			}
			cout<<count<<endl;
			
		}
		
	}
}
