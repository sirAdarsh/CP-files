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
    	int z,o;
    	z=o=0;
    	for(int i=0; i<n; i++){
    		cin >> ar[i];
    		if(ar[i]==0) z++;
    		else o++;
		}
		
		if(z>=n/2){
			cout << n/2 << endl;
			for(int i=0; i<n/2; i++){
				cout << 0 << ' ';
			}
		}
		else if(o==n/2){
			cout << z << endl;
			for(int i=0; i<z; i++){
				cout << 0 << ' ';
			}
		}
		else if(o>n/2){
			if((n/2)%2){
				cout << n/2 -1 << endl;
				for(int i=0; i<n/2-1; i++){
					cout << 1 << ' ';
				}
			}
			else{
				cout << n/2 << endl;
				for(int i=0; i<n/2; i++){
					cout << 1 << ' ';
				}
			}
		}
		
		cout << endl;
	}
    
}

