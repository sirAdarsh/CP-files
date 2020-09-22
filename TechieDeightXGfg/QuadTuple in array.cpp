#include<bits/stdc++.h>
using namespace std;
// 2, 7, 4, 0, 9, 5, 1, 3

typedef pair<int,int> Pair;

bool quadTuple(int A[],int n,int sum){
	unordered_map<int,vector<Pair>> map;
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			
			int val=sum-(A[i]+A[j]);
			
			if(map.find(val) != map.end()){
				
				for(auto pair: map.find(val)->second){
					
					int x=pair.first;
					int y=pair.second;
					
					if(x != i && x!=j && y!=i && y!=j ){
						cout<<" Quadruplet found ("<<A[i]<<" "<<A[j]
						<<" "<<A[x]<<" "<<A[y];
						return true;
					}
					
				}
			}
			map[A[i]+A[j]].push_back({i,j});
			
		}
	}
	return false;
}
int main(){
	int A[]={2,7,4,0,9,5,1,3};
	int sum=20;
	if(!quadTuple(A,sizeof(A)/sizeof(A[0]),sum)){
		cout<<"Not Found";
	}
}

