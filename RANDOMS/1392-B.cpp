/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
ll t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	ll n,k;
    	cin >> n >> k;
    	
    	ll arr[n];
    	ll maxx=INT_MIN;
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
    		maxx = max(maxx,arr[i]);
		}
    	
    	ll A[n],B[n];
    	
    	ll maxx2=INT_MIN;
    	
    	for(int i=0; i<n; i++){
    		A[i] = maxx-arr[i];
    		maxx2 = max(maxx2,A[i]);
		}
		
		for(int i=0; i<n; i++){
			B[i] = maxx2-A[i];
		}
		
		if(k%2){
			for(auto i : A){
				cout << i <<' ' ;
			}
		}
		else{
			for(auto i : B){
				cout << i <<' ' ;
			}
		}
		
		cout << endl;
		
	}
    
}

