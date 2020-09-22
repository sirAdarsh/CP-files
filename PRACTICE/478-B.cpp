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
    
    ll n,m;
    cin >> n >> m ;
    
    ll minn;
    ll num = n/m;

    
    ll p =n%m;
    
    minn = (m-p)*num*(num-1)/2;
    
    minn += (p)*(num+1)*(num)/2;
    
    
    cout << minn;
    
    ll maxx;
    num = n - (m-1);
    maxx = num*(num-1)/2;
    cout << " " << maxx<<endl;

}

