#include<bits/stdc++.h>
#define ll long long
using namespace std;

int solve(double n, double k){
	
	
	ll pris = 1;
	
	
	while(1){
		
		double p = n/pris;
		
		if(pris==n){
			return pris;
		}
		
		if ( p == (ll)p  && p <=k ){
			return pris;
		}
		
		pris ++ ;
	}
	
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
    	
    	double n;
		double k;
    	cin >> n >> k;
    	
    	cout << solve(n,k)<<endl;
    	
    	
	}
    
}

