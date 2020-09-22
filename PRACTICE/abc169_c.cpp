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
    ll a;
	double b;
    cin >> a >> b;
    
    double f = b-(ll)b;
    setprecision(2);
    ll a1 = a*f;
    ll a2 = a*(ll)b;
    cout << a1+a2 <<endl;
    
}

