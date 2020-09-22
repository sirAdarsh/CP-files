/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define pb push_back
#define pf push_front
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;
int dp[1006][1006];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> s;
    
    for(int i=0; i<1006; i++){
    		dp[i][i]=1;
	}
	
	int n = s.size();
    
    for(int sz=2; sz<=n; sz++){
    	
    	for(int j=0; j<n; j++){
    		
    		if(j+sz-1>=n){
    			continue;
			}
    		
    		if(sz==2){
    			
    			if(s[j]==s[j+sz-1]){
    				dp[j][j+sz-1]=2;
				}
				else{
					dp[j][j+sz-1]=1;
				}
    			
			}
			else{
				if(s[j]==s[j+sz-1]){
	    			dp[j][j+sz-1] = 2+dp[j+1][j+sz-2];
				}
				else{
					dp[j][j+sz-1] = max(dp[j][j+sz-2],dp[j+1][j+sz-1]);
				}
			}
    		
		}
    	
	}
    
    cout << dp[0][n-1];
    
}

