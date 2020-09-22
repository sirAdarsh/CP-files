#include<bits/stdc++.h>
#define ll long long
using namespace std;

int solve(int n,int a,int b,int c){
	
	int dp[n+1] = {};
	
	dp[0] = 0;
	
	for(int i=1; i<=n; i++){
		
		int x,y,z;
		
		x=y=z=-1;
		
		if(a <= i){
			x = dp[i-a] + 1;
		}
		if(b <= i){
			y = dp[i-b] + 1;
		}
		if(c <= i){
			z = dp[i-c] + 1;
		}
		
		if(x==-1 && y==-1 && z==-1){
			dp[i] = -1;
		}
		
		else{
			dp[i] = max((x,y),z);
		}
		
	}
	return dp[n];
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    
    cout<<solve(n,a,b,c)<<endl;
    
}

