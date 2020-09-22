/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    ll x,y,s;
    cin >> x >> y >> s;
    ll su =0;
    su =abs(x)+abs(y);
    if(s<su){
    	cout << "No"<<endl; return 0;
	}
	ll diff = s-su;
	if(diff%2) cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
    
}

