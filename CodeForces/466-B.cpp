/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
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
    ll n,a,b;
    cin >> n >> a >> b;
    
    ll movs=0;
    
    if(a*b>=n*6){
    	cout << a*b <<endl;
    	cout << a << ' ' << b << endl;
	}
	else{
		cout << n*6<<endl;
		ll bc = ceil((double)(n*6)/max(a,b));
		cout << bc << endl;
		movs += (b-bc);
		cout << max(a,b)*bc << endl;
		cout << a << ' ' << bc << endl;
	}
    
}

