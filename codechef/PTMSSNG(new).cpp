/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	ll n;
    	cin >> n;
    	n = 4*n-1;
    	int sx=0,sy=0;
    	while(n--){
    		int x,y;
    		cin >> x >> y;
    		sx^=x; sy^=y;
		}
		cout << sx << " " << sy << endl;
	}
    
}

