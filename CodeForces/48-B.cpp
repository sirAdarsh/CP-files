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
int gar[55][55];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n,m;
    cin >> n >> m;
    
    for(int i=1; i<=n; i++){
    	for(int j=1; j<=m; j++){
    		cin >> gar[i][j];
		}
	}
	int a,b;
	cin >> a >> b;
	int ans=INT_MAX;
	for(int i=1; i<=n; i++){
		
		for(int j=1; j<=m; j++){
			if(j+a-1<=m && i+b-1<=n){
				int cnt=0;
				for(int k=i; k<=i+b-1; k++){
					for(int l=j; l<=j+a-1; l++){
						if(gar[k][l])cnt++;
					}
				}
				ans = min(ans, cnt);
			}
			
		}
		
	}
	
	for(int i=1; i<=n; i++){
		
		for(int j=1; j<=m; j++){
			if(j+b-1<=m && i+a-1<=n){
				int cnt=0;
				for(int k=i; k<=i+a-1; k++){
					for(int l=j; l<=j+b-1; l++){
						if(gar[k][l])cnt++;
					}
				}
				ans = min(ans, cnt);
			}
			
		}
		
	}
	
    cout << ans << endl;
}

