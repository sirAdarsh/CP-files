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

bool go(vector<vector<ll>> &v, int sx, int sy, int dx, int dy, int r, int c){
	
	if(sx<0 || sy<0 || sx>r-1 || sx>c-1 || v[sx][sy]==0){
		return false;
	}
	if(sx==dx && sy==dy){
		return true;
	}
	
	bool ans;
	
	bool A,B,C,D;
	
	A = go(v,sx+1, sy, dx, dy, r, c);
	B = go(v,sx-1, sy, dx, dy, r,c);
	C = go(v,sx, sy+1, dx, dy, r,c);
	D= go(v,sx, sy-1, dx, dy, r, c);
	
	ans = A||B||C||D;
	return ans;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    ll r,c;
    cin >> r >> c;
    
    vector<vector<ll>> v(r,vector<ll>(c));
    
    for(int i=0; i<r; i++){
    	for(int j=0; j<c; j++){
    		cin >> v[i][j];
		}
	}
	
	cout << go(v, 0, 0, r-1, c-1, r, c);
    
}

