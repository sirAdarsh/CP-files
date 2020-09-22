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

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    ll n,m;
    cin >> n >> m;
    ll swaps = min( n/2, m );
    
    ll ans=0;
    
    for(int i=1; i<=n; i++){
    	
    	if(i<=swaps){
    		ans += (n-i);
		}
		else{
			ans += min(swaps,(n-i));
		}
	}
    cout << ans << endl;
}

