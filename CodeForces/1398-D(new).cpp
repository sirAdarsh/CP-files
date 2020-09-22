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

const int N=200;
int R,G,B;
int r[N],g[N],b[N];
int dp[N+1][N+1][N+1];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> R >> G >> B;
    for(int i=0; i<R; i++){
    	cin >> r[i];
	}
	for(int i=0; i<G; i++){
		cin >> g[i];
	}
	for(int i=0; i<B; i++){
		cin >> b[i];
	}
	
	sort(r,r+R);
	sort(g,g+G);
	sort(b,b+B);
    
    for(int i=0; i<=R; i++){
    	for(int j=0; j<=G; j++){
    		for(int k=0; k<=B; k++){
    			
    			if(i&&j){
    				dp[i][j][k] = max(dp[i][j][k], dp[i-1][j-1][k]+(r[i-1]*g[j-1]));
				}
				if(i&&k){
					dp[i][j][k] = max(dp[i][j][k], dp[i-1][j][k-1]+(r[i-1]*b[k-1]));
				}
				if(j&&k){
					dp[i][j][k] = max(dp[i][j][k], dp[i][j-1][k-1]+(g[j-1]*b[k-1]));
				}
			}
		}
	}
    cout << dp[R][G][B];
}

