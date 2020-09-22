#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> v){
	unordered_map<float,float> m;
	for(auto i : v){
		if(i<0){
			m[-1]++;
		}else if(i==0){
			m[0]++;
		}else{
			m[1]++;
		}
	}
	int n = v.size();
	cout<<m[1]<<" "<<m[0]<<" "<<m[-1];
	printf("%.6f",m[1]/n);
	printf("%.6f",m[-1]/n);
	printf("%.6f",m[0]/n);
}
int main(){
	vector<int> v = {-4,3,-9,0,4,1};
	solve(v);
}
