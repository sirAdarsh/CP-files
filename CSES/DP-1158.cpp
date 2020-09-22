/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

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

int dp[100001][1001];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n,x;
    cin >> n >> x;
    int h[n];
    int page[n];
    for(int i=0; i<n; i++){
    	cin >> h[i];
	}
	for(int i=0; i<n; i++){
		cin >> page[i];
	}
	
	for(int i=0; i<=x; i++){
		
		for(int j=1; j<=n; j++){
			
			int aa=0,bb=0;
			
			// when you take
			if(i-h[j-1]>=0)
			aa = page[j-1]+dp[i-h[j-1]][j-1];
			
			// when you dont take
			bb = dp[i][j-1];
			
			dp[i][j] = max(aa,bb);
			
		}
		
	}
    cout << dp[x][n];
}

