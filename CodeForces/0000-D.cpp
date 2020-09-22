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
    int n,k;
    cin >> n >> k;
    int ar[n];
    
    for(int i=0; i<n; i++){
    	cin >> ar[i];
	}
	sort(ar,ar+n);
	
	int __g=ar[n-1];
	
	for(int i=0; i<n; i++){
		__g = __gcd(__g,ar[i]);
	}
	
	if(k%2==0){
		cout << "NO";
	}
	else{
	
		for(int i=0; i<n; i++){
			
			int g;
			
			if(i==n-1){
				g = ar[n-2];
			}
			else{
				g = ar[n-1];
			}
			for(int j=0; j<n; j++){
				if(j==i){
					continue;
				}
				g = __gcd(g,ar[j]);
			}
			if(g!=1){
				cout << "YES";
				return 0;
			}
		}
		cout << "NO";
	}
	
}

