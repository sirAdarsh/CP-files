#include<iostream>
using namespace std;
int main(){
	string s;
	cin >> s;
	
	int n = s.size();
	cout<<n<<endl;
	int dp[n+1][n+1] = {};
//	
//	for(int i=0; i<n; i++){
//		
//		for(int j=i+1; i<n; j++ ){
//			
//			if( s[j] == s[j-1] ){
//				dp[i+1][j+1] = dp[i+1][j] + 1;
//			}
//			
//		}
//		
//	}
	int q;
	cin >> q;
	while(q--){
		int a,b;
		cin >> a >> b;
		cout << dp[a][b]<<endl;
	}
	
}
