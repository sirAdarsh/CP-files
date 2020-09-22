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
    	int n,a;
    	cin >> n >> a;
    	int arr[n];
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
		}
    	int lo=0, hi=n-1, mid;
    	int ans=-1;
    	while(lo<=hi){
    		mid = lo-(lo-hi)/2;
    		if( arr[mid]<=a ){
    			ans=mid;
    			lo++;
			}
			else{
				hi--;
			}
		}
		cout << ans << endl;
	}
    
}

