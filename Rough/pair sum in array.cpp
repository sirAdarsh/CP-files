//PROGRAM to find if a pair with a given sum exists using hashing

#include<bits/stdc++.h>
using namespace std;

void solve(int A[],int size,int sum){
	unordered_map<int,int> map;
	for(int i=0;i<size;i++){
		if(map.find(sum-A[i])!=map.end()){
			cout<<"solution = "<<A[i]<<" "<<sum-A[i];
			cout<<endl;
		}
		map[A[i]]++;
	}
}

int main(){
	int A[]={ 2, 7, 4, 0, 9, 5, 1, 3};
	int sum=10;
	solve(A,sizeof(A)/sizeof(A[0]),sum);
}
