#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n,m1;
	cin >> n >> m1;
	
	int arr[n];
	unordered_map<int,int> m;
	for(int i=0; i<n; i++){
		cin >> arr[i];
		m[arr[i]]++;
	}
	
	int size = m.size();
	
	int dp[n+1];
	
	dp[0] = size;
	
	for(int i=0; i<n; i++){
		
		m[ arr[i] ] --;
		if( m[arr[i]] == 0 ){
			size--;
		}
		dp[i+1] = size;
		
	}
	
	while(m1--){
		int q;
		cin >> q;
		cout<<dp[q-1]<<endl;
	}
	
}
