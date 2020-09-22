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
    ll n;
    cin >> n;
    ll a[n];
    ll sum=0;
    vector<ll> vec(n);
    for(ll i=0; i<n; i++){
    	cin >> a[i];
    	sum+=a[i];
    	vec[i]=a[i];
	}
	ll ans=0;
	
	
	for(ll i=0; i<n; i++){
		
		ll ar[n];
		for(ll h=0; h<n; h++){
			ar[h]=a[h];
		}
		
		ll tmp=0;
//		cout << " i = "<<i<<endl;
		for(ll j=i-1;j>=0;j--){
			tmp += max((ll)0,ar[j]-ar[j+1]);
			if(tmp!=0){
//				cout << " j = "<<j<< "  ar[j]-ar[j+1] = "<<ar[j]-ar[j+1]<<endl;
				ar[j]=ar[j]-(max((ll)0,ar[j]-ar[j+1]));
			}
		}
		for(ll j=i+1; j<n; j++){
			tmp += max((ll)0,ar[j]-ar[j-1]);
			if(tmp!=0){
//				cout << " j = "<<j<< "  ar[j]-ar[j-1] = "<<ar[j]-ar[j-1]<<endl;
				ar[j]=ar[j]-(max((ll)0,ar[j]-ar[j-1]));
			}
		}
//		cout << "   "<<sum-tmp<<endl;
//		cout<<endl;
//		for(int k=0;k<n;k++){
//			cout << ar[k] << ' ';
//		}
//		cout << endl;
		if(sum-tmp>ans){
			for(ll k=0; k<n; k++){
				vec[k]=ar[k];
			}
			ans=sum-tmp;
		}
//		cout<<endl;
	}
	for(auto i : vec){
		cout << i << ' ';
	}
}

