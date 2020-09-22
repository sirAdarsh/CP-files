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

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    ll n,a,b,c;
    cin >> n >> a >> b >> c;
    
    ll maxx= LONG_MIN;
    
    ll curr=0;
    
    ll tucks;
    
    for(int i=0; i<=4000; i++){
    	
    	ll curr1 = i*a;
    	
		if(curr1<=n){
    		
    		for(int j=0; j<=4000; j++){
    			
    			ll curr2 = curr1 + (j*b);
    			
    			if(curr2 <=n){
    				
    				ll rem = n-curr2;
    				
    				if( rem%c==0 ){
    					
    					tucks = i+j+(rem/c);
    					maxx = max(maxx, tucks);
    					
					}
    				
				}
    			
			}
    		
		}
    	
	}
	cout << maxx << endl;
    
}

