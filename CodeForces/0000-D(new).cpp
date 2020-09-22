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

int prime[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    ll n,k;
    cin >> n >> k;
    
    ll ar[n];
    for(int i=0; i<n; i++){
    	cin >>ar[i];
	}
	sort(ar,ar+n);
	ll g = ar[n-1];
	for(int i=0; i<n; i++){
		g = __gcd(g,ar[i]);
	}
	
	if(k%2==0){
		cout << "NO";
	}
	else{
		if(g>1){
			cout <<"YES";
			return 0;
		}
		
		for(auto i : prime){
			
			ll cnt=0;
			
			for(int j=0; j<n; j++){
				if(ar[j]%i==0){
					cnt++;
				}
			}
			if(cnt>=n-1){
				cout << "YES";
				return 0;
			}
		}
		cout << "NO";
	}
    
}

