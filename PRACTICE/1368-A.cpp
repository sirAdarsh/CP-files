/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
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
    	ll a,b,n;
    	cin >> a >> b >> n;
    	
    	ll s = 0;
    	
    	while(max(a,b) <= n){
    		if(a<=b) a+=b;
    		else b+=a;
    		s++;
		}
    	
    	cout << s << endl;
	}
    
}

