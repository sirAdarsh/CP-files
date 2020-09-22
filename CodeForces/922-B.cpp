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
    
    int n;
    cin >> n;
    int count=0;
    unordered_map<string,bool> mp;
    for(int i=1; i<=n; i++){
    	int x = i;
    	for(int j=i+1; j<=n; j++){
    		if(j!=i){
    			x=i^j;
    			if(x!=i && x!=j && x<=n && x>=1 && x+i>j && x+j>i && j+i>x){
    				int a[]={i,j,x};
    				sort(a,a+3);
    				s = to_string(a[0]);
    				s += to_string(a[1]);
    				s += to_string(a[2]);
    				mp[s]++;
				}
			}
		}
	}
    cout << mp.size() << endl;
}

