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
    
    int n,a,b;
    cin >> n >> a >> b;
    
    cin >> s;
    
    int ans=0;
    
    int M=a,m=b;
    M = max(M,m);
    m = min(M,m);
    
    int bo=0;
    
    for(int i=0; i<n; i++){
    	
    	if(s[i]=='*'){
    		M = max(M,m);
    		m = min(M,m);
    		bo=0;
		}
		else{
			
			if(bo%2==0 && M!=0){
				ans++;
				M--;
				bo++;
			}
			else if(bo%2 && m!=0){
				ans++;
				m--;
				bo++;
			}
			else{
				bo=0;
				M=max(M,m);
				m=min(M,m);
			}
		}
    	
	}
    cout << ans << endl;
}

