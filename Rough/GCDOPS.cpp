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
    	cin>> n;
    	int b[n+1];
    	int a[n+1];
    	for(int i=1; i<=n; i++){
    		a[i]=i;
		}
		for(int i=1; i<=n; i++){
			cin >> b[i];
		}
		
		bool e =false;
		
		for(int i=1; i<=n; i++){
			
			if(b[i]>a[i]){
				e=true;
				break;
			}
			
			if(a[i]%b[i]){
				e=true;
				break;
			}
			
		}
		
		if(e)cout <<"NO"<<endl;
		else cout <<"YES" << endl; 
		
	}
}

