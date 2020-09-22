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
    
    
    ll n;
    cin >> n;
    
    ll ans=1;
    
    for(ll i=2; i*i<=n; i++){
    	if(n%i)continue;
    	
    	ll d1,d2;
    	d1=i;
    	d2=n/i;
    	
    	bool ch=true;
    	
    	if(( (ll)pow((ll)sqrt(d1),2)) == (d1)){
    		ch = false;
		} 
    	
    	
		if(ch){
			ans=max(ans,d1);
		}
		
		ch = true;
		
		if( ( (ll)pow((ll)sqrt(d2),2) == (d2) )) ch=false;
		
		for(ll j=2; j*j<=d2; j++){
    		
    		if(d2%j)continue;
    		
    		if( ( (ll)pow((ll)sqrt(d2/j),2) == (d2/j))  || ( (ll)pow((ll)sqrt(j),2)==j )){
    			ch=false;
    			break;
			}
    		
		}
		
		if(ch){
			ans=max(ans,d2);
		}
    	
    	
    }
    	cout << ans << endl;
}

