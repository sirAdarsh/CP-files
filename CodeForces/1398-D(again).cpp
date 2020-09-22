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

int R,G,B;

int dp[210][210][210];

int solve(int r[], int g[], int b[], int i, int j, int k){
	
	int a=0,bb=0,c=0;
	if(dp[i][j][k]!=-1){
		return dp[i][j][k];
	}
	if(i<R && j<G){
		a = r[i]*g[j]+solve(r,g,b,i+1,j+1,k);
	}
	if(i<R && k<B){
		bb = r[i]*b[k]+solve(r,g,b,i+1,j,k+1);
	}
	if(j<G && k<B){
		c = g[j]*b[k]+solve(r,g,b,i,j+1,k+1);
	}
	dp[i][j][k]=max(a,max(bb,c));
	return dp[i][j][k];
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> R >> G >> B;
    int r[R],g[G],b[B];
    for(int i=0; i<R; i++){
    	cin >> r[i];
	}
	for(int i=0; i<G; i++){
		cin >> g[i];
	}
	for(int i=0; i<B; i++){
		cin >> b[i];
	}
	sort(r,r+R,greater<>());
	sort(g,g+G,greater<>());
	sort(b,b+B,greater<>());
	memset(dp,-1,sizeof(dp));
    cout << solve(r,g,b,0,0,0);
    
}

