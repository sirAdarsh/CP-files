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

int n,a,b,c;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> n >> a >> b >> c;
    
    int dp[n+1];
    memset(dp,-1,sizeof(dp));
    
    dp[0]=0;
    int arr[3]={a,b,c};
    
    for(int i=1; i<=n; i++){
    	int maxx = -1;
    	for(int j=0; j<3; j++){
    		  	if( i-arr[j]>=0 && dp[i-arr[j]]!=-1 ){
    			maxx = max(maxx, dp[i-arr[j]]+1);
			}
    		dp[i]=maxx;
		}
	}
	cout << dp[n] << endl;
    
}

