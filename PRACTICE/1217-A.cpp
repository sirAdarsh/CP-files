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
    	int s,i,e;
    	cin >> s >> i >>e;
    	
    	int diff = (i-s+1);
    	int ans = 0;
    	
    	if(diff>0) e-=diff;
    	
    	ans = e/2;
    	cout << ans << endl;
    	
	}
}

