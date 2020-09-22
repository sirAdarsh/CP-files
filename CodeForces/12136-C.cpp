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
    int n;
    cin >> n;
    
    int c=1;
    
    int mat[n+1][n+1];
    int b=1;
    
    for(int i=1; i<=n; i++){
    	
    	if(b){
    		for(int j=1; j<=n; j++){
	    		mat[j][i]=c;
	    		c++;
			}
			b^=1;
		}
    	
    	else{
    		for(int j=n; j>0; j--){
    			mat[j][i]=c;
    			c++;
			}
			b^=1;
		}
	}
    
    for(int i=1; i<=n; i++){
    	for(int j=1; j<=n; j++){
    		cout << mat[i][j] << ' ';
		}
		cout << endl;
	}
}

