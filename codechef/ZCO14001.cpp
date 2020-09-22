#include<bits/stdc++.h>
using namespace std;

int main(){
	long n,h;
	cin>>n>>h;
	long arr[n];
	
//	cout<<h;
	for(long i=0;i<n;i++){
		cin>>arr[i];
	}
	
	long cmd;
	long ptr=0;
	bool hold=false;
	cin>>cmd;
	
//	cout<<h;
	while(cmd!=0){
		switch(cmd){
			case 1: {
				if(ptr!=0){
					ptr=ptr-1;
				}
				
				break;
			}
					
			case 2: {
				if(ptr!=n-1){
					ptr=ptr+1;
				}
				break;
			}
					
			case 3:{
				if(hold==false && arr[ptr]!=0){
					hold=true;
					arr[ptr]=arr[ptr]-1;
				}
				break;
			}
					
			case 4:{
				if(hold==true && arr[ptr]<h){
					hold=false;
					arr[ptr]=arr[ptr]+1;
				}
				break;
			}
		}
		cin>>cmd;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}









