/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    ll n,k,l,r,S,s;
    cin >> n >> k >> l >> r >> S >> s;
    
    ll filFirst = S-s;
    
    ll f = 0;
    
    if(n-k!=0) f = filFirst/(n-k);
    
    ll ans[n];
    
    for(int i=0; i<n-k;i++){
    	ans[i] = f;
	}
    
    ll S1 = f*(n-k);
    ll diff = (filFirst-S1);
    for(int i=0; i<diff; i++){
    	ans[i]++;
	}
    
    
    f = s/k;
    for(int i=n-k; i<n; i++){
    	ans[i]=f;
	}
    
    S1 = f*(k);
    diff = (s-S1);
    for(int i=n-k; i<n && diff>0; i++){
    	diff--;
    	ans[i]++;
	}
    for(auto i:ans){
    	cout<<i<<" ";
	}
}

