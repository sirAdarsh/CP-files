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

struct ticket{
	ll l,r,cost;
};

bool cmp(ticket t1, ticket t2){
	if(t1.l<t2.l){
		return true;
	}
	return t1.r<t2.l;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n, x;
    cin >> n >> x;
    ll l,r,c;
    vector<ticket> vec;
    for(int i=0; i<n; i++){
    	cin >> l >> r >> c;
    	ticket a;
    	a.l=l;
    	a.r=r;
    	a.cost=c;
    	vec.pb(a);
	}
	
	sort(vec.begin(),vec.end(),cmp);
	
	ll minn=1e18;
	bool ok=false;
	
	for(int i=1; i<n; i++){
		
		for(int j=0; j<i; j++){
			if(j==i){
				continue;
			}
			if( (vec[i].l)>(vec[j].r) ){
				ll d1,d2;
				d1 = vec[i].r-vec[i].l+1;
				d2 = vec[j].r-vec[j].l+1;
				if(d1+d2==x){
//					cout << vec[i].l << ' ' << vec[j].r << endl;
					minn = min (minn,vec[i].cost+vec[j].cost);
					ok=true;
				}
			}
			
		}
		
	}
	if(ok)
	cout << minn << endl;
	else{
		cout << -1 << endl;
	}
}

