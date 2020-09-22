#include<iostream>
using namespace std;
#define max 100000

int dp[max];

int solve(int m, string s){
	
	dp[1] = 0;
	
	for(int i = 2; i<=m; i++){
//		cout<<s[i-1]<<" "<<s[i-2]<<" " ;
		if( s[i-1] == s[i-2] ){
			dp[i] = dp[i-1] + 1;
		}else{
			dp[i] = dp[i-1];
		}
//		cout<<dp[i]<<endl;
	}
	
}



int main(){
	string s;
	cin >> s;
	
	int n = s.size();
//	cout<<n<<endl;
	
	solve(n,s);
	
	int q;
	cin >> q;
	
//	for(int i=1;i<=n;i++){
//		cout<<dp[i]<<endl;
//	}
	
	while(q--){
		int a,b;
		cin >> a >> b;
		cout<<dp[b]-dp[a]<<endl;
	}
	
}
