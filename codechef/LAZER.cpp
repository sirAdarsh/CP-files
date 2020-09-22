#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int tc;
	cin>>tc;
	
	unordered_map<int,int> map;	
	
	
	for(int i=0;i<tc;i++){
		
		int n,q;
		cin>>n>>q;
		int arr[n];
		for(int i=1;i<=n;i++){
			cin>>arr[i];
			map[i]=arr[i];
		}
		
		int x1,x2,y;
		while(q-->0){
			int cnt=0;
			cin>>x1>>x2>>y;
			
			int pos=0,initPos=0;
			//true means point is up the line
			if(y < map[x1]){
					initPos=-1;
				}
			if(y > map[x1]){
					initPos=1;
				}
			if(y == map[x1]){
					cnt++;
				}
			x1++;
				
			while(x1<=x2){
				if(y > map[x1]){
					pos=1;
				}
				if(y < map[x1]){
					pos=-1;
				}
				if(y == map[x1]){
					cnt++;
					x1++;
					continue;
				}
				
				if(initPos * pos <0){
					cnt++;
				}
				x1++;
				initPos=pos;
			}
			cout<<cnt<<endl;
			
		}
	}
	
}
