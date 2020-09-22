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
ll t;

vector<ll> zAlg(vector<ll> tot){
	
	
	ll l=0,r=0;
	ll len = tot.size();
	vector<ll> z(len);
	
	for(ll i=0; i<len; i++){
		
		if(i>r){
			
			l=r=i;
			
			while( r<len && tot[r]==tot[r-l] ){
				r++;
			}
			
			z[i]=r-l;
			r--;
			
		}
		else{
			
			int idx = i-l;
			if(  z[idx] < r-i+1 ){
				z[i]=z[idx];
			}
			else{
				
				l=i;
				while(r<len && tot[r]==tot[r-l]){
					r++;
				}
				z[i]=r-l;
				r--;
			}
			
		}
		
	}
	return z;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    ll n,m;
    cin >> n >> m;
    
    vector<ll> main(n);
    for(ll i=0; i<n; i++){
    	cin >> t;
    	main[i]=t;
	}
	
	vector<ll> pat(m);
	for(ll i=0; i<m; i++){
		cin >> t;
		pat[i]=t;
	}
	
	vector<ll> tot;
	
	for(int i=0; i<m-1; i++){
		tot.push_back( pat[i+1]-pat[i] );
	}
	tot.push_back(1000000001);
	for(int i=0; i<n-1; i++){
		tot.push_back(main[i+1]-main[i]);
	}

	vector<ll> z = zAlg(tot);
	
	ll cnt=0;
	for(auto i : z){
		if(i==m-1)cnt++;
	}
	
    cout << cnt ;
}

