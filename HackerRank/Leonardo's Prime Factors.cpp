#include<bits/stdc++.h>
#define ll long long
using namespace std;


vector<ll> sieve(){
	ll m = 10000;
	bool primes[m+1]={};
	
	// 0 -> prime
	
	for(ll i=2; i*i<=m; i++){
		if(primes[i]==0){
			for(ll j= i*i; j<=m; j+=i){
				primes[j]=1;
			}
		}
	}
	vector<ll> prime;
	for(ll i =2; i<=m; i++){
		if(primes[i]==0){
			prime.push_back(i);
		}
	}
	return prime;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<ll> primes = sieve();
    
    int t;
    cin >> t;
    while(t--){
    	ll n;
    	cin >> n;
    	ll counts = 0;
    	ll prod = 1;
    	for(ll i = 0; i< primes.size(); i++){
    		prod *= primes[i];
    		if(prod<=n){
    			counts++;
			}
			else{
				break;
			}
		}
    	cout<<counts<<endl;
	}
    
}

