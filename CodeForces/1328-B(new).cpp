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
    	int n,k;
    	cin >> n >> k;
    	vector<int> fib;
    	fib.pb(0);
    	
    	for(int i=1; i<n; i++){
    		fib.pb(fib[i-1]+i);
		}
		
		auto it = lower_bound(fib.begin(),fib.end(),k);
		
		int pos_from_begin = n-1 - (it - fib.begin());
		
		int num = *it;
		
		int psh = ((*it)-k+1);
		
		string str(n,'a');
		str[pos_from_begin]='b';
		str[pos_from_begin+psh]='b';
		cout << str << endl;
		
	}
}

