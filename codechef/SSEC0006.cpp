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

vector<int> ps;

int a,b;

void sieve(){
	
	bool prime[10001];
	memset(prime,true,sizeof(prime));
	
	for(int i=2; i<=10000; i++){
		
		if(prime[i]){
			for(int j=i*i; j<=10000; j+=i){
				
				prime[j]=false;	
			}
		}
		
	}
	
	for(int i=a; i<=b; i++){
		if(prime[i]){
			ps.pb(i);
		}
	}
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> a >> b;
    
    sieve();
    
    int n = ps.size();
    
    int mn=(a/2)*(b/2);
    int mx=a*b;
    
    for(int i=0; i<n; i++){
    	
    	for(int j=i+1; j<n; j++){
    		
    		if(i!=j){
    			
    			if((ps[i]*ps[j]<=mx) && (ps[i]*ps[j]>=mn)){
    				cout << ps[i] << ',' << ps[j]<<endl;
				}
    			
			}
    		
		}
    	
	}
    
}

