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
    	ll a,b,x,y,n;
    	cin >> a >> b >> x >> y >> n;
    
		ll tmpA=a;
		
		tmpA = max(min(x,a),a-n);
		
		ll df = a-tmpA;
		
		ll tmpB=b;
//		cout << df << endl;
		tmpB = max(min(y,b),b-(n-df));
//		cout << " " <<tmpA << ' ' << tmpB << endl;
		
		ll ans1 = tmpA*tmpB;
		
		tmpA = a;
		tmpB = b;
		
		tmpB = max(min(y,b),b-n);
		
		df = b-tmpB;
//		cout << df << endl;
		
		tmpA = max(min(x,a),a-(n-df));
//		cout << " " <<tmpA << ' ' << tmpB << endl;
		ll ans2 = tmpA*tmpB;
		cout << min(ans2,ans1)<<endl;
		
	}
}

