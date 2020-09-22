/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    
    int dp[n+1];
    
    memset(dp, -1, sizeof(dp));
    
    dp[0] = 0;
    
    for(int i=1; i<n+1; i++){
    	
    	int maxx =-1;
    	
    	if(i-a>=0){
    		if(dp[i-a]>=0){
    			maxx = max(maxx, dp[i-a]+1);
			}
		}
		if(i-b>=0){
    		if(dp[i-b]>=0){
    			maxx = max(maxx, dp[i-b]+1);
			}
		}
		if(i-c>=0){
    		if(dp[i-c]>=0){
    			maxx = max(maxx, dp[i-c]+1);
			}
		}
		
		dp[i] = maxx;
    	
	}
	
	for(int i=0; i<n+1; i++){
		cout << i << "  " << dp[i] << endl;
	}
	
	cout << dp[n];
    
}

