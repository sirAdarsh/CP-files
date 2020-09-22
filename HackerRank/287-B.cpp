/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    ll n,k;
    cin >> n >> k;
    if(k>=n){
    	cout<<1<<endl;
	}
	else{
		ll tk=k;
		ll checker = k*(k-1)/2+1;
		cout << checker << endl;
		if(n>checker){
			cout<<-1<<endl;
		}
		else{
			ll p = ceil((float)(n-tk)/(k-2));
			cout << 1+p<<endl;
		}
	}
    
}

