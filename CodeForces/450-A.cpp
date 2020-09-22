#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int arr[n+1];
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	int ansIndex;
	int zeros=0;
	
	while(zeros!=n){
		
		for(int i=1;i<=n;i++){
			if(arr[i]>0){
				arr[i]=arr[i]-m;
					if(arr[i]<=0){
					zeros++;
					ansIndex=i;
					}
			}
		}		
	}
	cout<<ansIndex<<endl;
}
