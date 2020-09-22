/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

 #pragma GCC optimize("Ofast")
 #pragma GCC target("avx,avx2,fma")

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
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    
    ll n,k;
    cin >> n >> k;
    
    s = bitset<32>(n).to_string();
    
    reverse(s.begin(),s.end());
    
    vector<ll> vec;
    
    for(int i=0; i<s.size(); i++){
    	if(s[i]=='1'){
    		vec.pb(pow(2,i));
		}
	}
	
	ll tK=vec.size();
	
	if(tK==k){
		cout << "YES"<<endl;
		for(int i:vec){
			cout << i <<' ';
		}
		return 0;
	}
	
    ll idx=0;
    
    
    	for( ; idx<vec.size(); idx++){
    		if(vec[idx]!=1){
    			vec.insert(vec.begin()+idx+1,vec[idx]/2);
    			vec.insert(vec.begin()+idx+2,vec[idx]/2);
    			vec.erase(vec.begin()+idx);
    			idx--;
    			tK++;
			}
			
			if(tK==k){
				cout <<"YES" << endl;
				for(int i:vec){
					cout << i <<' ';
				}
				return 0;
			}
			if(tK>k){
				cout <<"NO";
				return 0;
			}
			
		}
		
		if(idx==vec.size()){
			cout<<"NO";
			return 0;
		}
    
    
}

