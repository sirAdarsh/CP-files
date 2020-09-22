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
    	int M[n][n];
    	for(int i=0; i<n; i++){
    		for(int j=0; j<n; j++){
    			cin >> M[i][j];
			}
		}
		int pairs=0;
		for(int i=0; i<n; i++){
			for(int ii=i; ii<n; ii++){
				for(int j=0; j<n; j++){
					for(int jj=j; jj<n; jj++){
						if(M[i][j]>M[ii][jj]){
							pairs++;
						}
					}
				}
			}
		}
		cout << pairs << endl;
	}
    
}

