/*----- || Hare Krishna || -----*/

// IT TAKES TIME, DON'T FORGET WHO YOU ARE!

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
    
    ll n,d;
    cin >> n >> d;
    ll arr[n];
    double adds=0;
    cin>>arr[0];
    ll ans=0;
    for(int i=1; i<n; i++){
    	cin >> arr[i];
    	adds = max((ll)0,arr[i-1]-arr[i]+1);
    	adds = (ceil(adds/d))*d;
    	ans += (ceil(adds/d));
    	arr[i] = arr[i]+adds;
	}
    cout << ans<<endl;
}

