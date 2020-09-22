//Finding triplet with a given sum ia an array
#include<bits/stdc++.h>
using namespace std;

bool triplet(int A[],int sum,int n){
	
	unordered_map<int,int> map;
	
	for(int i=0;i<n;i++){
		map[i]=A[i];
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			
			int val=sum-(A[i]+A[j]);
			if(map.find(val) != map.end()){
				
				if(map.find(val)->first != i && map.find(val)->first != j){
					cout<<"Triplet found "<<A[i]<<" "<<A[j]<<" "<<val<<" "<<endl;
					return true;
				}
				
			}
			
			
		}
	}
	
	return false;
	
}

int main(){
	int A[]={2,5,2,1,7,3,8,1,0,-1};
	int sum=10;
	if(!triplet(A,sum,10)){
		cout<<"No Triplet found."<<endl;
	}
}
