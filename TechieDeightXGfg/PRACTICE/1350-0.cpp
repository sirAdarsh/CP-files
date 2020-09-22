#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll findMinFactor(ll n){
	
	for(ll i=2; i<=n; i++){
		if(n%i==0){
			return i;
		}
	}
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
    	ll n,k;
    	cin >> n >> k;
    	
    	int smallestFacOfN = findMinFactor(n);
    	k--;
    	
    	n += smallestFacOfN;
    	
		int smallestFact = findMinFactor(n);
		
		int toBeSub = k*smallestFact;
		
		n += toBeSub;
		cout<<n<<endl;
		
	}
    
    
}

