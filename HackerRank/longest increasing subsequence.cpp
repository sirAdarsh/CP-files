#include<bits/stdc++.h>
using namespace std;


int LIS(vector<int> v){
	
	int n = v.size();
	int LIS[n];
	for(int i =0;i<n;i++){
		LIS[i]=1;
	}
	
	for(int i =0; i < n; i++){
		for(int j = 0 ; j<i ; j++){
			if(v[j]<v[i]){
				LIS[i] = max(LIS[i],LIS[j]+1);
			}
		}
	}
	int maxLIS=0;
	for(int i=0;i<n;i++){
		if(LIS[i]>maxLIS){
			maxLIS = LIS[i];
		}
	}
	
	return maxLIS;
}

int main(){
	vector<int> v = {6,2,4,3,7,4,5};
	cout<<LIS(v);
}
