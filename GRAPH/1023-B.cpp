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
    
    ll a,b;
    cin >> a >> b;
    
    ll c;
    c = b/2;
    cout <<"c = " << c << endl;
    
    ll d = b-1;
    
    ll e = a-c;
    
    ll f = min(d-c,e);
    f = max((ll)0,f);
    
	cout << "a = "<<a<<endl;
	cout << "be = "<<b<<endl;
	cout << "c = "<<c<<endl;
	cout << "d = "<<d<<endl;
	cout << "e = "<<e<<endl;
	cout << "f = "<<f<<endl;  
    cout << f << endl;
    
}

