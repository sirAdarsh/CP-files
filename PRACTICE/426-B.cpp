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
    
    int n,m;
    cin >> n >> m;
    int mat[n][m];
    for(int i=0; i<n; i++){
    	for(int j=0; j<m; j++){
    		cin >> mat[i][j];
		}
	}
    
    if(n%2){
    	cout << n << endl;
	}
	else{
		
		int ans=n;
		int up=0,down=n-1;
		
		int sz=n;
		
			
			
			for(int i=sz/2; i>0; i/=2){
				bool ok=true;
				for(int k=1; k<=i; k++){
					for(int j=0; j<m; j++){
						if(mat[i-k][j]!=mat[i+(k-1)][j]){
							ok=false;
							break;
						}
					}
					if(!ok)break;
				}
				if(!ok)break;
				ans=i;
				if(i&1){
					break;
				}
			}
			
			
		
		cout << ans << endl;
	}
    
}

