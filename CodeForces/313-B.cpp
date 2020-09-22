#include<iostream>
using namespace std;
int main(){
	string s;
	cin >> s;
	
	int q;
	cin >> q;
	int n = s.size();
	
	int dp[n+1][n+1] = {};
	
	for(int i=0; i<n; i++){
		
		for(int j=i+1; i<n; j++ ){
			
			if( s[j] == s[j-1] ){
				dp[i+1][j+1] = dp[i+1][j] + 1;
			}
			
		}
		
	}
	
	while(q--){
		int a,b;
		cin >> a >> b;
		cout << dp[a][b]<<endl;
		
		
	}
	
}
