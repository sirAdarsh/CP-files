/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")

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

ll n,k;

void solve(){
	
	ll sum=0;
	ll nn=n;
	
	if(n%2){
		k--;
		nn--;
	}
	
	vector<ll> vec(k,1);
	sum=k;
	ll sz=k;
	
	if(sum>nn){
		cout<<"NO";
		return;
	}	
	
	for(ll i=0; i<sz; i=(i+1)%sz){
		cout << sum << endl;
		sum -= vec[i];
		vec[i]*=2;
		sum += vec[i];
		
		if(sum>nn){
			cout << "NO";
			return;
		}
		if(sum==nn){
			cout <<"YES"<<endl;;
			if(n%2) vec.pb(1);
			for(ll i:vec){
				cout << i << ' ';
			}
			return;
		}
		
	}
	cout << "NO";
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> n >> k;
    solve(); 
    
}

