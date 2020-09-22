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
#define INF INT_MAX
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

int ar[100001], st[400004];

void build(int si, int ss, int se){
	
	if(ss == se){ // leaf node
		st[si]=ar[ss];
	}
	
	int mid = (ss + se)/2;
	
	build(2*si, si, mid);
	build(2*si+1, mid+1, se);
	
	st[si] = min( st[2*si], st[2*si+1] );
	
}

int query(int si, int ss, int se, int qs, int qe){
	
	if( ss>qe || se<qs ){
		return INF;
	}
	
	if(ss >= qs && se <= qe){
		return st[si];
	}
	
	int mid = (ss+se)/2;
	
	return min( query(2*si, ss, mid, qs, qe), query(2*si+1, mid+1, se, qs, qe) );
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n,q,l,r;
    cin >> n ;
    
    for(int i=1; i<=n; i++){
    	cin >> ar[i];
	}
	
	build(1, 1, n);
	cin >> q;
	
	for(int i=0; i<q; i++){
		
		int l,r;
		cin >> l >> r;
		
		cout << query(1, 1, n, l+1, r+1) << endl;
		
	}
	
    
}

