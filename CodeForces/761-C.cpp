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
    
    int n,m;
    cin >> n >> m;
    
    vector<ll> dig(n),alf(n),spe(n);
    
    for(int i=0; i<n; i++){
    	cin >> s;
    	ll d,al,sp;
    	d=al=sp=-1;
    	for(int j=0; j<s.size(); j++){
    		if(d==-1 && s[j]<='9' && s[j]>='0'){
    			d=j;
			}
			elif(al==-1 && s[j]<='z' && s[j]>='a'){
				al=j;
			}
			elif(sp==-1 && (s[j]=='*'||s[j]=='#'||s[j]=='&')){
				sp=j;
			} 
		}
		dig[i]=d;
		alf[i]=al;
		spe[i]=sp;
	}
    
    int minn=INT_MAX;
    
    for(int i=0; i<n; i++){
    	for(int j=0; j<n; j++){
    		for(int k=0; k<n; k++){
    			int tmp;
    			if(i==j || j==k || k==i){
    				continue;
				}
				vector<int> v;
				v.pb(i);
				v.pb(j);
				v.pb(k);
				sort(v.begin(),v.end());
				
				do{
					cout << v[0] << ' ' << v[1] << ' ' << v[2] << endl;
					if(dig[v[0]]!=-1 && alf[v[1]]!=-1 && spe[v[2]]!=-1){
	    				tmp = dig[v[0]]+alf[v[1]]+spe[v[2]];
						minn=min(minn,tmp);
					} 
				}
				while(next_permutation(v.begin(),v.end()));
				
			}
		}
	}
    cout << minn << endl;
}

