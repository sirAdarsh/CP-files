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

bool check(int a[], int n){
	for(int i=0; i<n; i++){
		if(a[i]!=0){
			return 1;
		}
	}
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> t;
    while(t--){
    	int n,k;
    	cin >> n >> k;
    	
    	int ans=0;
    	
    	int ar[n];
    	for(int i=0; i<n; i++){
    		cin >> ar[i];
		}
		
		
		int a[n];
		for(int i=0; i<n; i++){
			a[i]=ar[i];
		}
		
		int var=0;
		
		bool fault=false;
		
		while(1){
			
			ans++;
			
			int tmpK=1;
			
			int i;
			int prev=-1;
			
			for(i=0; i<n; i++){
				ar[i]=a[i];
				if(i>0 && a[i]!=a[i-1]){
					tmpK++;
				}
				prev=a[i];
				if(tmpK==k){
					break;
				}
			}
			
			for(;i<n; i++){
				ar[i]=prev;
			}
			
			for(int i=0; i<n; i++){
				a[i]=a[i]-ar[i];
			}
			
			
			if(check(a,n)==0){
				break;
			}
			
			if(ans>n+1){
				fault=true;
				break;
			}
			
		}
		if(fault){
			cout << -1 << endl;
		}
		else
    	cout << ans << endl;
	}
}

