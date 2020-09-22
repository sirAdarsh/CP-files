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

int t;

auto z_algo(string str){
	
	ll len = str.length();
	ll l=0,r=0;
	vector<ll> z(len);
	
	for(ll i=1; i<len; i++){
		
		if(i>r){
			
			l=r=i;
			while( r<len && str[r]==str[r-l] ){
				r++;
			}
			z[i]=r-l;
			r--;
			
		}
		else{
			
			ll idx = i-l;
			
			if(i+z[idx]<=r){
				z[i]=z[idx];
			}
			else{
				l=i;
				while(r<len && str[r]==str[r-l] ){
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
    
    string str;
    cin >> str;
    
    auto z = z_algo(str);
    for(auto i:z){
    	cout << i << ' ';
	}
    
}

