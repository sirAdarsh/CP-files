/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    ll n;
    cin >> n;
    ll arr[n];
    for(int i=0; i<n; i++){
    	cin >> arr[i];
	}
    
    ll ans=0;
    
    for(int i=0; i<n; i++){
    	ans += ( (arr[i]-1)*i);
    	ans += (arr[i]-1);
    	ans++;
	}
    cout << ans << endl;
}

