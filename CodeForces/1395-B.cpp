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
int n,m,sx,sy;

void solve(){
	
	int r,c;
	
	cout << sx << ' ' << sy << endl;
	
	if(sy!=1){
		r = sx;
		c=1;
		cout << r << ' ' << c <<endl;
	}
	int bh=0;
	
	for(int j=1; j<=m; j++){
		
		if(bh%2==0){
			for(int i=1; i<=n; i++){
				if( (i==sx && j==sy) || (i==r && j==c) ){
					continue;
				}
				else{
					cout << i << ' ' << j << endl;
				}
			}
		}
		else{
			for(int i=n; i>=1; i--){
				if( (i==sx && j==sy) || (i==r && j==c) ){
					continue;
				}
				else{
					cout << i << ' ' << j << endl;
				}
			}
		}
		bh++;
	}
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    
    cin >> n >> m >> sx >> sy;
    solve();
    
    
}

