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
    
    ll x,y;
    cin >> x >> y;
    ll f1,f2,f3;
    f1=x; f2=y; f3=(y-x); 
    ll arr[3]={f1,f2,f3};
	
	double n;
	cin >> n;
	
	ll time = ceil(n/3);
	ll frm = ((ll)n)%3;
	ll ans = arr[frm]-1;
	if(time % 2==0 ){
		ans*=-1;
	}
	
	cout<<(ans+MOD)%MOD<<endl;
	    
}

