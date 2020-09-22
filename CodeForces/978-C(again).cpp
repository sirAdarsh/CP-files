/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define pb push_back
#define pf push_front
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

int i=0;
int so_far=0;

void solve(ll ar[], ll n){
	ll b;
	cin >> b;
	ll d,r;
	
	for(; i<n; i++){
		so_far += ar[i];
		b -= so_far;
		if(b<=0){
			d=i+1;
			r=b;
			so_far-=ar[i];
			i--;
			break;
		}
	}
	cout << d << ' ' << r << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n;
    cin >> n >> t;
    ll ar[n];
    for(int i=0; i<n; i++){
    	cin >> ar[i];
	}
	while(t--){
		solve(ar, n);
	}
}

