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
    	int n,k1,k2;
    	cin >> n >> k1 >> k2;
    	vector<int> v1,v2;
    	int p;
    	for(int i=0; i<k1; i++){
    		cin >> p;
    		v1.pb(p);
		}
		for(int i=0; i<k2; i++){
			cin >> p;
			v2.pb(p);
		}
		sort(v1.begin(),v1.end(),greater<>());
		sort(v2.begin(),v2.end(),greater<>());
		cout << v1[0] << ' ' << v2[0] << endl;
		if(v1[0]>v2[0])cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}

