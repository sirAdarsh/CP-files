// Program to find triplet of a given sum
#include<bits/stdc++.h>
using namespace std;

//2, 7, 4, 0, 9, 5, 1, 3

typedef pair<int,int> Pair;

bool findTriplets(int A[],int size,sum){
	unordered_map<int,vector<Pair>> map;  //map< SUM , PAIR > 
	
	for(int i=0;i<n;i++){
		int val=sum-A[i];
		
		if(map.find(val) != map.end())){
			
			for(auto pair : map.find(val)->second){
				
				int x=pair.first;
				int y=pair.second;
				
				if(x!=i && x!=j && y!=i && y!=j){
					
					cout<<"Triplet found "<<A[i]<<" "<<A[j]
					<<" "<<A[x]<<A[y]l
					return true;	
				}
				
				map[A[i]+A[j]].push_back({i,j});
			}
		}
	}
	return false;
	
}

int main(){
	int A[]={2, 7, 4, 0, 9, 5, 1, 3};
	sum=8;
	if(!findTriplets(A,sizeof(A)/sizeof(A[0]),sum)){
		cout<<"NOT FOUND";
	}
}
