#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> v,int n){
	
	int m = 0, M =0;
	for(auto i : v){
		
		m = m + i;
		if(m < 0){
			m = 0;
		}
		if(m > M){
			M = m;
		}
	}
	return M;
	
}

vector<int> solve(vector<int> v, int n){
	
	vector<int> ans;
	
	int sumSS = 0;
	for(auto i : v){
		if(i>0){
			sumSS += i;
		}
	}
	int sumSA =maxSumSubarray(v,n);
	ans.push_back(sumSA);
	ans.push_back(sumSS);
	
}


int main(){
	int t;
	cin >> t;
	while(t--){
		
		int n =5;
		vector<int> vec = {2,-1,2,3,4,-5};
		
	}
}
