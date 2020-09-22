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

int r,c;

int dp[1000][1000];

int numOfWays( vector<vector<int>> &v, int x, int y ){
	
	if(x==r-1 && y==c-1){
		return 1;
	}
	
	if(x<0 || y<0 || x>r-1 || y>c-1){
		return 0;
	}
	if(dp[x][y]!=-1){
		return dp[x][y];
	}
	int ans=0;
	ans += numOfWays(v,x+1,y);
	ans += numOfWays(v,x-1,y);
	ans += numOfWays(v,x,y-1);
	ans += numOfWays(v,x,y+1);
	
	return dp[x][y]=ans;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> r >> c;
    
    vector<vector<int>> vec(r,vector<int>(c));
    
    for(int i=0; i<r; i++){
    	for(int j=0; j<c; j++){
    		cin >> vec[i][j];
		}
	}
    memset(dp,-1,sizeof(dp));
    cout << numOfWays(vec,0,0);
    
}

