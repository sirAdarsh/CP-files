/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")

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
    	int n;
    	cin >> n;
    	cin >> s;
    	ll sm[n+1];
    	sm[0]=0;
    	
    	for(int i=0;i<n; i++){
    		sm[i+1]=sm[i]+(s[i]-'0');
		}
		
		ll sbs=0;
		for(int i=0; i<n; i++){
			int l,r;
			l=i;
			for(int j=i; j<n; j++){
				r=j;
				if(sm[j+1]-sm[i]==r-l+1){
					sbs++;
				}
			}
		}
		cout << sbs << endl;
	}
    
}

