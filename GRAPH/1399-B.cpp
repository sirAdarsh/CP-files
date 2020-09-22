/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
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
    	ll n;
    	cin >> n;
    	ll a[n],b[n];
    	
    	ll minA=INT_MAX;
    	ll minB=INT_MAX;
    	
    	for(int i=0; i<n; i++){
    		cin >> a[i];
    		minA = min(minA,a[i]);
		}
		for(int i=0; i<n; i++){
			cin >> b[i];
			minB = min(minB,b[i]);
		}
		
		ll ops=0;
		
		for(int i=0; i<n; i++){
			
			a[i] = a[i]-minA;
			
			b[i] = b[i]-minB;
			
			ops += max(a[i],b[i]);
			
		}
		
		cout << ops << endl;
		
	}
    
}

