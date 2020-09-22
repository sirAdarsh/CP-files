/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int t;

void solve(int l, int r){
	
	int sqR = sqrt(r);
	bool primeTillRootR[sqR+1];
	
	memset(primeTillRootR,true,sizeof(primeTillRootR));
	
	for(int i=2; i*i<=sqR; i++){
		if(primeTillRootR[i]){	
			for(int j=i*i; j<=sqR; i+=j){
				primeTillRootR[j] = true;
			}
		}
	}
	
	bool prime[r-l+1];
	memset(prime,true,sizeof(prime));
	
	for(int i=2; i<=sqR; i++){
		if(primeTillRootR[i]){
			for(int j=i*i; j<=r; j+=i){
				if( j>=l ){
					prime[j-l] = false;
				}
			}
		}
	}
	
	int totalPrimes=0;
	
	for(int i=0; i<r-l+1; i++){
		if(l+i==1) continue;
		if(prime[i]){
			cout << l+i << endl;
		}
	}
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	int l,r;
    	cin >> l >> r;
    	
    	solve(l,r);
    	
	}
    
}

