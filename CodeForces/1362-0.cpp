/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int solve(ll minm, ll maxm){
	
	if(minm==maxm){
		return 0;
	}
	
	ll count =0 ;
	
	int p = 1;
	
	cout << "minm = "<<minm << " maxm = "<<maxm<<endl;
	
	while( minm < maxm ){
		
		if( minm*8 <= maxm ){
			count++;
			minm*=8;
		}
		else if( minm*4 <=maxm){
			count++;
			minm*=4;
		}
		else{
			count++;
			minm*=2;
		}
		
	}
	
	if(minm > maxm){
		return -1;
	}
	
	return count;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	ll a,b;
    	cin >> a >> b;
    	
    	ll minm = min(a,b);
    	ll maxm = max(a,b);
    	
    	cout << solve(minm,maxm)<<endl;
    	
	}
    
}

