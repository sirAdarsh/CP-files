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
    	int n;
    	cin >> n;
    	int ar[n];
    	int X=0, sm=0;
    	for(int i=0; i<n; i++){
    		cin >> ar[i];
    		X^=ar[i];
    		sm+=ar[i];
		}
//		cout << sm << ' ' << X << endl;
		if(sm%2==0 && sm/2==X){
			cout << 0 << endl << endl;
		}
		else{
			
			cout << 2 << endl;
			
			cout << X << ' ';
			sm += X;
			
			cout << sm << endl;
			
		}
		
	}
    
}

