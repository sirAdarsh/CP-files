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
    
    ll a,b;
    cin >> a >> b;
    vector<ll> arr;
    if(b<a){
    	swap(a,b);
	}
	ll pairs=0;
    for(int i=1; i<=a; i++){
    	ll d = b - (5-(i%5));
    	if(d>=0){
			pairs++;
			pairs += (d/5);
		}
	}
    cout << pairs << endl;
}

