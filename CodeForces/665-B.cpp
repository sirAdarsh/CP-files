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
    
    int n,m,k;
    cin >> n >> m >> k;
    
    ll ar[k];
    for(int i=0; i<k; i++){
    	cin >> ar[i];
	}
	
	ll amt=0;
	
	while(n--){
		
		for(int i=0; i<m; i++){
			
			cin >> t;
			
			int idx=0;
			
			for(int j=0; j<k; j++){
				if(ar[j]==t){
					idx=j;
					break;
				}
			}
			amt += (idx+1);
			for(int j=idx; j>0; j--){
				swap(ar[j],ar[j-1]);
			}
		}
		
	}
    cout << amt << endl;
}

