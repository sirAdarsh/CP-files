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
    cin >> t;
    while(t--){
    	
    	ll ans=0;
    	ll n;
    	cin >> n;
    	
    	vector<ll> v(n);
    	ll pos=0;
    	
    	ll preNeg[n+1];
    	
    	for(int i=0; i<n; i++){
    		cin >> v[i];
    		if(v[i]>0){
    			pos+=v[i];
			}
		}
		
		preNeg[n]=0;
		
		for(auto i=n-1; i>=0; i--){
			if(v[i]<0){
				preNeg[i]=abs(v[i])+preNeg[i+1];
			}
			else{
				preNeg[i]=preNeg[i+1];
			}
		}
		
		for(int i=0; i<n; i++){
			
			if(v[i]<0){
				continue;
			}
			
			ll num = min(v[i], preNeg[i]);
			if(i+1<n)
			preNeg[i+1] = max((ll)0,preNeg[i]-num);
			pos-=num;
			
		}
    	cout << pos << endl;
	}
}

