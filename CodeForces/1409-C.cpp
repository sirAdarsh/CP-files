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
    	
    	ll highest = LONG_LONG_MAX;
    	
    	ll n,x,y;
    	cin >> n >> x >> y;
    	ll d=-1;
    	
    	ll dif = y-x;
    	
    	for(int i=1; i<=dif; i++){
    		
    		ll lst;
    		
    		if(dif%i){
    			continue;
			}
    		
    		ll a1 = y-(n-1)*i;
    		
    		if(a1>x){
    			continue;
			}
    		
    		if(a1==0){
    			if(y+i<highest){
    				
    				highest=y+1;
    				d=i;
    				
				}
    			
    			continue;
			}
    		
    		if(a1<0){
    			lst = y+ ceil(((double)abs(a1))/i)*i ;
    			
    			int fst = lst-(n-1)*i;
    			
    			if(fst==0){
    				lst+=i;
				}
    			
    			if(highest>lst){
    				highest = min(highest,lst);
    				d=i;
				}
			}
			else{
				highest=min(highest,y);
				d=i;
			}
    		
		}
		
		for(int i=0; i<n; i++){
			cout << (ll)(highest-(i*d)) << ' ';
		}
    	cout << endl;
	}
}

