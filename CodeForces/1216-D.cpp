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

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    vector<ll> vec(n);
    bool flag=false;
    int prev;
    for(int i=0; i<n; i++){
    	cin >> vec[i];
    	if(i!=0){
    		if(vec[i]!=prev){
    			flag=true;
			}
		}
    	prev==vec[i];
	}
	if(!flag){
		cout << 0 << ' ' << 0 << endl;
		return 0;
	}
	ll maxx = *max_element(vec.begin(),vec.end());
	vector<ll> v;
	for(int i=0; i<n; i++){
		if(maxx-vec[i]!=0){
			v.pb(maxx-vec[i]);
		}
	}
	ll g = v[0];
	for(auto i : v){
		g = __gcd(g,i);
	}
	
	ll Y=0;
	
	for(auto i : v){
		
		Y += (i/g);
		
	}
	cout << Y << ' ' << g << endl;
}

