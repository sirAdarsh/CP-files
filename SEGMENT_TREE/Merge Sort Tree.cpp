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

int lg2(const int &x){return 31 - __builtin_clz(x);}
long long int lg2(const long long int &x){return 63 - __builtin_clzll(x);}

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

const int N = 1000;
vector<int> st[4*N];
int ar[N];

void build(int si, int ss, int se){
	if(ss==se){
		//leaf
		st[si].pb(ar[ss]);
		return;
	}
	int mid=(ss+se)>>1;
	build(si<<1,ss,mid);
	build(si<<1|1,mid+1,se);
	int i,j;
	i=j=0;
	// filling the st[si] vector with its children's elmnts in sorted order
	while(i<st[si<<1].size() && j<st[si<<1|1].size()){
		if(st[si<<1][i]<st[si<<1|1][j]){
			st[si].pb(st[si<<1][i]);
			i++;
		}
		else{
			st[si].pb(st[si<<1|1][j]);
			j++;
		}
	}
	//add remainging elements(which will be definitely from one of the childs
	while(i<st[si<<1].size()){
		st[si].pb(st[si<<1][i]);
		i++;
	}
	while(j<st[si<<1|1].size()){
		st[si].pb(st[si<<1|1][j]);
		j++;
	}
		
}

int query(int si, int ss, int se, int qs, int qe, int k){
	
	if(qs>se || qe<ss){
		return 0;
	}
	
	if(ss>=qs && qe>=se){
		int ans;
		ans = upper_bound(st[si].begin(),st[si].end(),k)-st[si].begin();
		return ans;
	}
	int mid= (ss+se)>>1;
	
	return query(si<<1,ss,mid,qs,qe,k)+query(si<<1|1,mid+1,se,qs,qe,k);
	
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
        
    int n,q;
	cin >> n >> q;
	for(int i=1; i<=n; i++){
		cin >> ar[i];
	}    
	build(1,1,n);
	while(q--){
		int l,r,m;
		cin >> l >> r >> m;
		cout << query(1,1,n,l,r,m) << endl;
	}
        
}
