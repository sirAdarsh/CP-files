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

ll fac(int n){
	int ans=1;
	for(int i=1; i<=n; i++){
		ans*=i;
	}
	return ans;
}

ll nCr(int n, int r){
	if(r==0){
		return 0;
	}
	
	int tm = n-r+1;
	int ans=1;
	
	for(int tmp=tm; tmp<=n; tmp++){
		ans *= tmp;
	}
	
	ans/=fac(r);
	
	return ans;
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n,k;
    cin >> n >> k;
    ll ans=1;
    
    for(int i=1; i<=k; i++){
    	
    	ll tmp;
    	
    	tmp = nCr(n,i);
    	
    	vector<int> vec;
    	for(int j=0; j<i; j++){
    		vec.pb(j);
		}
    	
    	ll d=0;
    	
    	do{
    		bool ok=true;
    		for(int k=0; k<vec.size(); k++){
    			if(k==vec[k]){
    				ok=false;
				}
			}
			if(ok){
				d++;
			}
		}
		while(next_permutation(vec.begin(),vec.end()));
		ans += (tmp*d);
    	
	}
    cout << ans << endl;
}

